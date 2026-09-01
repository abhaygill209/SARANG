"""
Cocotb testbench for Delay_Unit module (NTT Engine Commutator/Delay Unit).

Functionality:
  The Delay Unit reorders streaming data pairs between NTT butterfly stages.
  For a given STAGE (S >= 1):
    - Block size: 2^S pairs (2^(S+1) scalar words)
    - Group size: K = 2^(S-1) pairs (2^S scalar words)
    - Buffer 1 receives the first K pairs (2^S words)
    - Buffer 2 receives the next K pairs (2^S words)
    - Once Buffer 2 receives its first pair, the unit streams out 2^S reordered pairs:
        Output pair i = (Buffer_1[i], Buffer_2[i]) for i in 0 .. 2^S - 1.

Example for STAGE = 2:
  Input pairs:  (1,2), (3,4), (5,6), (7,8)
  Buffer 1:     [1, 2, 3, 4]
  Buffer 2:     [5, 6, 7, 8]
  Output pairs: (1,5), (2,6), (3,7), (4,8)
"""

import random
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, Timer


def get_dut_params(dut):
    """Extract parameters from the DUT."""
    stage = int(dut.STAGE.value) if hasattr(dut, "STAGE") else 1
    data_width = int(dut.DATA_WIDTH.value) if hasattr(dut, "DATA_WIDTH") else 16
    depth = int(dut.DEPTH.value) if hasattr(dut, "DEPTH") else 10
    n = int(dut.N.value) if hasattr(dut, "N") else 16
    return stage, data_width, depth, n


def reorder_delay_unit_block(input_pairs, stage):
    """
    Golden reference permutation for a single block of 2^stage pairs.
    """
    k = 1 << (stage - 1)  # pairs per buffer
    assert len(input_pairs) == 2 * k, f"Expected {2*k} pairs, got {len(input_pairs)}"
    buf1 = []
    for a, b in input_pairs[:k]:
        buf1.extend([a, b])
    buf2 = []
    for a, b in input_pairs[k:]:
        buf2.extend([a, b])
    return list(zip(buf1, buf2))


def reorder_delay_unit_stream(input_pairs, stage):
    """
    Golden reference permutation for a stream containing an integer number of blocks.
    """
    block_size = 1 << stage
    assert len(input_pairs) % block_size == 0, (
        f"Stream length ({len(input_pairs)}) must be a multiple of block size {block_size}"
    )
    output_pairs = []
    for i in range(0, len(input_pairs), block_size):
        block = input_pairs[i:i + block_size]
        output_pairs.extend(reorder_delay_unit_block(block, stage))
    return output_pairs


async def start_clock(dut, period_ns=10):
    """Start clock generator."""
    clock = Clock(dut.clk_i, period_ns, unit="ns")
    cocotb.start_soon(clock.start())


async def reset_dut(dut):
    """Apply synchronous reset to DUT."""
    dut.rst_i.value = 1
    dut.valid_i.value = 0
    dut.stall_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0

    await ClockCycles(dut.clk_i, 3)
    dut.rst_i.value = 0
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")


async def run_stream(dut, input_pairs, stage, max_cycles=10000):
    """
    Feed an input stream to DUT and collect & verify output pairs.
    """
    expected_pairs = reorder_delay_unit_stream(input_pairs, stage)
    expected_latency = (1 << (stage - 1)) + 2  # cycles from first input to first valid_o

    collected_outputs = []
    in_idx = 0
    cycle = 0
    first_valid_cycle = None

    while len(collected_outputs) < len(expected_pairs):
        if in_idx < len(input_pairs):
            dut.valid_i.value = 1
            dut.a_i.value = input_pairs[in_idx][0]
            dut.b_i.value = input_pairs[in_idx][1]
            in_idx += 1
        else:
            dut.valid_i.value = 0
            dut.a_i.value = 0
            dut.b_i.value = 0

        await RisingEdge(dut.clk_i)
        await Timer(1, unit="ns")

        if int(dut.valid_o.value) == 1:
            if first_valid_cycle is None:
                first_valid_cycle = cycle
            a_out = int(dut.a_o.value)
            b_out = int(dut.b_o.value)
            collected_outputs.append((a_out, b_out))

        cycle += 1
        assert cycle < max_cycles, f"Simulation timeout after {cycle} cycles"

    # Drive input idle
    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0

    # Wait for valid_o to return to 0 (all data drained)
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")
    assert int(dut.valid_o.value) == 0, "valid_o should be 0 after all data has been drained"

    # Check latency
    dut._log.info(f"First valid output observed at cycle {first_valid_cycle} (expected ~{expected_latency})")

    # Check data correctness
    assert len(collected_outputs) == len(expected_pairs), (
        f"Output count mismatch: got {len(collected_outputs)}, expected {len(expected_pairs)}"
    )
    for idx, (got, exp) in enumerate(zip(collected_outputs, expected_pairs)):
        assert got == exp, (
            f"Output mismatch at pair index {idx}: got a_o={got[0]}, b_o={got[1]} | "
            f"expected a_o={exp[0]}, b_o={exp[1]}"
        )

    dut._log.info(f"Successfully verified {len(collected_outputs)} output pairs against golden model.")
    return collected_outputs


@cocotb.test()
async def directed_single_block(dut):
    """
    Test 1: Directed single block test with known incrementing integers.
    Verifies exact reordering behavior and cycle latency.
    """
    await start_clock(dut)
    await reset_dut(dut)

    stage, data_width, depth, n = get_dut_params(dut)
    dut._log.info(f"--- Running directed_single_block (STAGE={stage}, DATA_WIDTH={data_width}) ---")

    block_size = 1 << stage
    # Generate sequential pairs (1, 2), (3, 4), (5, 6), (7, 8)...
    input_pairs = []
    for i in range(block_size):
        a = 2 * i + 1
        b = 2 * i + 2
        input_pairs.append((a, b))

    expected_pairs = reorder_delay_unit_stream(input_pairs, stage)
    dut._log.info(f"Input pairs:    {input_pairs}")
    dut._log.info(f"Expected pairs: {expected_pairs}")

    outputs = await run_stream(dut, input_pairs, stage)
    assert outputs == expected_pairs


@cocotb.test()
async def continuous_multi_block_stream(dut):
    """
    Test 2: Continuous multi-block stream test.
    Verifies throughput and data ordering across multiple consecutive blocks without bubbles.
    """
    await start_clock(dut)
    await reset_dut(dut)

    stage, data_width, depth, n = get_dut_params(dut)
    dut._log.info(f"--- Running continuous_multi_block_stream (STAGE={stage}) ---")

    num_blocks = 8
    block_size = 1 << stage
    total_pairs = num_blocks * block_size

    input_pairs = []
    for i in range(total_pairs):
        a = (2 * i + 1) & ((1 << data_width) - 1)
        b = (2 * i + 2) & ((1 << data_width) - 1)
        input_pairs.append((a, b))

    await run_stream(dut, input_pairs, stage)


@cocotb.test()
async def randomized_streaming(dut):
    """
    Test 3: Randomized streaming test.
    Verifies arbitrary data patterns with pseudo-random values.
    """
    await start_clock(dut)
    await reset_dut(dut)

    stage, data_width, depth, n = get_dut_params(dut)
    dut._log.info(f"--- Running randomized_streaming (STAGE={stage}) ---")

    rng = random.Random(42 + stage)
    max_val = (1 << data_width) - 1

    num_blocks = 16
    block_size = 1 << stage
    total_pairs = num_blocks * block_size

    input_pairs = [
        (rng.randint(0, max_val), rng.randint(0, max_val))
        for _ in range(total_pairs)
    ]

    await run_stream(dut, input_pairs, stage)


@cocotb.test()
async def multi_frame_with_inter_frame_gaps(dut):
    """
    Test 4: Multi-frame test with idle intervals between frames.
    Simulates consecutive NTT transform frames separated by idle cycles.
    """
    await start_clock(dut)
    await reset_dut(dut)

    stage, data_width, depth, n = get_dut_params(dut)
    dut._log.info(f"--- Running multi_frame_with_inter_frame_gaps (STAGE={stage}) ---")

    rng = random.Random(100 + stage)
    max_val = (1 << data_width) - 1
    block_size = 1 << stage
    num_frames = 4
    pairs_per_frame = block_size * 2  # 2 blocks per frame

    for frame in range(num_frames):
        dut._log.info(f"Sending Frame {frame + 1}/{num_frames}...")
        frame_inputs = [
            (rng.randint(0, max_val), rng.randint(0, max_val))
            for _ in range(pairs_per_frame)
        ]
        await run_stream(dut, frame_inputs, stage)

        # Idle interval between frames
        idle_cycles = rng.randint(3, 10)
        dut._log.info(f"Inserting {idle_cycles} idle cycles before next frame...")
        dut.valid_i.value = 0
        dut.a_i.value = 0
        dut.b_i.value = 0
        await ClockCycles(dut.clk_i, idle_cycles)


@cocotb.test()
async def corner_case_values(dut):
    """
    Test 5: Corner case data patterns (all 0s, all 1s, alternating bitmasks, max values).
    """
    await start_clock(dut)
    await reset_dut(dut)

    stage, data_width, depth, n = get_dut_params(dut)
    dut._log.info(f"--- Running corner_case_values (STAGE={stage}) ---")

    max_val = (1 << data_width) - 1
    block_size = 1 << stage

    special_patterns = [
        (0, 0),
        (max_val, max_val),
        (0x5555 & max_val, 0xAAAA & max_val),
        (0xAAAA & max_val, 0x5555 & max_val),
        (0x00FF & max_val, 0xFF00 & max_val),
        (1, max_val - 1),
        (3328, 3327),  # Q-1, Q-2 for Kyber / Dilithium NTT
    ]

    # Pad or repeat to fill integer number of blocks
    input_pairs = []
    while len(input_pairs) < block_size * 4:
        for p in special_patterns:
            input_pairs.append(p)
            if len(input_pairs) >= block_size * 4:
                break

    await run_stream(dut, input_pairs, stage)


@cocotb.test()
async def mid_stream_reset_recovery(dut):
    """
    Test 6: Assert reset mid-stream and ensure clean recovery on subsequent transactions.
    """
    await start_clock(dut)
    await reset_dut(dut)

    stage, data_width, depth, n = get_dut_params(dut)
    dut._log.info(f"--- Running mid_stream_reset_recovery (STAGE={stage}) ---")

    block_size = 1 << stage
    # Start driving some data
    dut.valid_i.value = 1
    dut.a_i.value = 0x1234
    dut.b_i.value = 0x5678
    await ClockCycles(dut.clk_i, block_size)

    # Trigger reset mid-stream
    dut._log.info("Applying synchronous reset mid-stream...")
    dut.rst_i.value = 1
    dut.valid_i.value = 0
    await ClockCycles(dut.clk_i, 3)
    dut.rst_i.value = 0
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")

    assert int(dut.valid_o.value) == 0, "valid_o must be 0 after reset"

    # Drive a fresh stream of 2 blocks and verify full correctness
    fresh_inputs = [
        (i + 1, (i + 1) * 10)
        for i in range(block_size * 2)
    ]
    await run_stream(dut, fresh_inputs, stage)
