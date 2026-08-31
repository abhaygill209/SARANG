import random
import numpy as np 
from collections import deque

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge, Timer

from MontgomeryMul import Montgomery


Q = 3329
Q_WIDTH = 16
R = 2**16
Q_INV = 3327
PIPELINE_LATENCY = 4

Test_iterations = 750

mont = Montgomery(Q, R)


def montgomery_reduce(t):
    return mont.redc(t)


def butterfly_golden_mont(a_mont, b_mont, w_mont):
    """Return expected DUT outputs, all in Montgomery representation."""
    bw = montgomery_reduce(b_mont * w_mont)
    a_out = a_mont + bw
    if a_out >= Q:
        a_out -= Q

    if a_mont >= bw:
        b_out = a_mont - bw
    else:
        b_out = a_mont + Q - bw

    return a_out, b_out


def butterfly_golden_regular(a, b, w):
    """Reference CT butterfly in normal integer representation."""
    return (a + b * w) % Q, (a - b * w) % Q


def to_mont(value):
    return mont.to_mont(value % Q)


async def start_clock(dut):
    clock = Clock(dut.clk, 10, unit="ns")
    cocotb.start_soon(clock.start())


async def reset_dut(dut):
    dut.rst.value = 1
    dut.valid_i.value = 0
    dut.stall.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    dut.w.value = 0

    await ClockCycles(dut.clk, 3)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    await Timer(1, unit="ns")


async def drive_one(dut, a_mont, b_mont, w_mont):
    expected = butterfly_golden_mont(a_mont, b_mont, w_mont)

    dut.a_i.value = a_mont
    dut.b_i.value = b_mont
    dut.w.value = w_mont
    dut.valid_i.value = 1
    dut.stall.value = 0
    await RisingEdge(dut.clk)
    await Timer(1, unit="ns")

    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    dut.w.value = 0

    await ClockCycles(dut.clk, PIPELINE_LATENCY)
    await Timer(1, unit="ns")

    assert int(dut.valid_out.value) == 1, "valid_out did not assert at expected pipeline latency"
    got = (int(dut.a_o.value), int(dut.b_o.value))
    assert got == expected, (
        f"single transaction mismatch: got a_o={got[0]}, b_o={got[1]}, "
        f"expected a_o={expected[0]}, b_o={expected[1]}"
    )

    await RisingEdge(dut.clk)
    await Timer(1, unit="ns")
    assert int(dut.valid_out.value) == 0, "valid_out stayed high after one-cycle transaction"


async def run_stream(dut, vectors, stall_pattern=None):
    if stall_pattern is None:
        stall_pattern = set()

    # Mirror the DUT's valid/data pipeline. A new expected result enters when
    # the RTL accepts an input, and an old result exits after PIPELINE_LATENCY
    # non-stalled clock edges.
    expected_pipeline = deque([None] * PIPELINE_LATENCY)
    sent = 0
    received = 0
    cycle = 0

    while received < len(vectors):
        # The DUT freezes all pipeline registers when stall is high, so the
        # scoreboard must also stop shifting on these cycles.
        stall = cycle in stall_pattern
        dut.stall.value = int(stall)

        # Keep the next unsent vector on the input bus until it is accepted.
        # During stall cycles valid_i may be high, but the RTL will not sample it.
        if sent < len(vectors):
            a_mont, b_mont, w_mont = vectors[sent]
            dut.valid_i.value = 1
            dut.a_i.value = a_mont
            dut.b_i.value = b_mont
            dut.w.value = w_mont
        else:
            dut.valid_i.value = 0
            dut.a_i.value = 0
            dut.b_i.value = 0
            dut.w.value = 0

        # An input transaction is accepted only on a non-stalled clock edge.
        # Compute the golden output at the same logical point as acceptance.
        accepted_expected = None
        if not stall and sent < len(vectors):
            accepted_expected = butterfly_golden_mont(*vectors[sent])
            sent += 1

        await RisingEdge(dut.clk)
        await Timer(1, unit="ns")

        if not stall:
            # Advance the expected-output pipeline exactly once for each RTL
            # pipeline advance. None represents an invalid bubble.
            expected_pipeline.append(accepted_expected)
            expected = expected_pipeline.popleft()
            if expected is None:
                assert int(dut.valid_out.value) == 0, (
                    f"valid_out asserted unexpectedly on cycle {cycle}"
                )
            else:
                # A real expected value means valid_out must be asserted and
                # both butterfly outputs must match the Montgomery-domain model.
                assert int(dut.valid_out.value) == 1, (
                    f"valid_out did not assert for expected output on cycle {cycle}"
                )
                got = (int(dut.a_o.value), int(dut.b_o.value))
                assert got == expected, (
                    f"stream mismatch on cycle {cycle}: got a_o={got[0]}, b_o={got[1]}, "
                    f"expected a_o={expected[0]}, b_o={expected[1]}"
                )
                received += 1

        cycle += 1
        assert cycle < 10000, "test timed out before all expected outputs were observed"

    dut.valid_i.value = 0
    dut.stall.value = 0


@cocotb.test()
async def directed_values(dut):
    await start_clock(dut)
    await reset_dut(dut)

    directed = [
    (random.randint(0, Q - 1),
     random.randint(0, Q - 1),
     random.randint(0, Q - 1))
    for _ in range(Test_iterations)
    ]

    for a, b, w in directed:
        a_mont = to_mont(a)
        b_mont = to_mont(b)
        w_mont = to_mont(w)

        expected_regular = butterfly_golden_regular(a, b, w)
        await drive_one(dut, a_mont, b_mont, w_mont)

        got_regular = (
            mont.from_mont(int(dut.a_o.value)),
            mont.from_mont(int(dut.b_o.value)),
        )
        assert got_regular == expected_regular, (
            f"regular-domain mismatch for a={a}, b={b}, w={w}: "
            f"got {got_regular}, expected {expected_regular}"
        )


@cocotb.test()
async def randomized_streaming_values(dut):
    await start_clock(dut)
    await reset_dut(dut)

    rng = random.Random(42)
    vectors = [
        (to_mont(rng.randrange(Q)), to_mont(rng.randrange(Q)), to_mont(rng.randrange(Q)))
        for _ in range(Test_iterations)
    ]

    await run_stream(dut, vectors)


@cocotb.test()
async def streaming_with_stall(dut):
    await start_clock(dut)
    await reset_dut(dut)

    rng = random.Random(123)
    vectors = [
        (to_mont(rng.randrange(Q)), to_mont(rng.randrange(Q)), to_mont(rng.randrange(Q)))
        for _ in range(Test_iterations)
    ]

    stall_pattern = random.sample(
        range(Test_iterations),
        random.randrange(1, Test_iterations + 1)
    )

    await run_stream(dut, vectors, stall_pattern)
