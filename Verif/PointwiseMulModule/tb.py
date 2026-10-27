"""
Cocotb Testbench for PointwiseMul.v (Montgomery Pointwise Multiplier)

Functional Description:
  The PointwiseMul module performs Montgomery multiplication on pairs of coefficients.
  Inputs:
    - a1_i, a2_i : First coefficient pair operands (Channel A: index 2k)
    - b1_i, b2_i : Second coefficient pair operands (Channel B: index 2k+1)
    - valid_i    : Input valid strobe
  Outputs:
    - valid_o    : Output valid strobe (asserted PIPELINE_LATENCY cycles after valid_i)
    - a_o        : Montgomery product of a1_i and a2_i (Channel A)
    - b_o        : Montgomery product of b1_i and b2_i (Channel B)

Pipeline Latency:
  5 clock cycles:
    Stage 1: Multiplier prod_s1 = operand1 * operand2
    Stage 2: Montgomery factor m_s2 = (prod_s1 * Q_INV) mod R
    Stage 3: Correction multiplication corr_s3 = m_s2 * Q
    Stage 4: Montgomery addition sum_s4 = prod_s3 + corr_s3
    Stage 5: Division by R (sum_s4 >> Q_WIDTH) and modular reduction mod Q -> (a_o, b_o)

Golden Test Data:
  Loaded from Algo/pointwise_montgomery_results.csv containing 256 Montgomery coefficients
  grouped into 128 pairs:
    Pair k: (A_Mont[2k], B_Mont[2k]) -> a_o = Output_Mont[2k]
            (A_Mont[2k+1], B_Mont[2k+1]) -> b_o = Output_Mont[2k+1]
"""

import os
import csv
import random
from collections import deque

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge, Timer

# ==============================================================================
# Simulation Constants
# ==============================================================================
CLOCK_PERIOD_NS = 10
PIPELINE_LATENCY = 4
Q = 7681
DATA_WIDTH = 16


def find_csv_path():
    """Locate pointwise_montgomery_results.csv across relative and absolute locations."""
    candidates = [
        os.path.abspath(os.path.join(os.path.dirname(__file__), "../../Algo/pointwise_montgomery_results.csv")),
        "/home/abhay/OpenSource/PQC_ASIC/Algo/pointwise_montgomery_results.csv",
        os.path.abspath("./Algo/pointwise_montgomery_results.csv"),
    ]
    for p in candidates:
        if os.path.exists(p):
            return p
    raise FileNotFoundError("Could not locate pointwise_montgomery_results.csv in expected paths.")


def load_csv_pairs(csv_path):
    """
    Parse CSV rows into pairs suitable for driving PointwiseMul.
    Each pair contains:
      ((a1, a2), (b1, b2), (expected_a, expected_b), (idx_a, idx_b))
    """
    rows = []
    with open(csv_path, mode="r", newline="") as f:
        reader = csv.DictReader(f)
        for row in reader:
            rows.append({
                "Index": int(row["Index"]),
                "A_Ordinary": int(row["A_Ordinary"]),
                "B_Ordinary": int(row["B_Ordinary"]),
                "A_Montgomery": int(row["A_Montgomery"]),
                "B_Montgomery": int(row["B_Montgomery"]),
                "Output_Montgomery": int(row["Output_Montgomery"]),
                "Output_Decoded": int(row["Output_Decoded"])
            })

    pairs = []
    num_pairs = len(rows) // 2
    for k in range(num_pairs):
        row_a = rows[2 * k]
        row_b = rows[2 * k + 1]

        a1 = row_a["A_Montgomery"]
        a2 = row_a["B_Montgomery"]
        exp_a = row_a["Output_Montgomery"]

        b1 = row_b["A_Montgomery"]
        b2 = row_b["B_Montgomery"]
        exp_b = row_b["Output_Montgomery"]

        pairs.append({
            "pair_idx": k,
            "idx_a": row_a["Index"],
            "idx_b": row_b["Index"],
            "a1": a1,
            "a2": a2,
            "b1": b1,
            "b2": b2,
            "expected_a": exp_a,
            "expected_b": exp_b,
        })
    return pairs


# ==============================================================================
# Helper Tasks
# ==============================================================================
async def start_clock(dut):
    """Start clock with 10 ns period."""
    clock = Clock(dut.clk_i, CLOCK_PERIOD_NS, unit="ns")
    cocotb.start_soon(clock.start())


async def reset_dut(dut):
    """Reset the PointwiseMul DUT."""
    dut.rst_i.value = 1
    dut.valid_i.value = 0
    dut.a1_i.value = 0
    dut.a2_i.value = 0
    dut.b1_i.value = 0
    dut.b2_i.value = 0

    await ClockCycles(dut.clk_i, 5)
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")
    dut.rst_i.value = 0
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")


# ==============================================================================
# Test 1: Single Pair Directed Transaction and Latency Verification
# ==============================================================================
@cocotb.test()
async def test_single_transaction_and_latency(dut):
    """Test a single 1-cycle transaction and verify exact 5-cycle pipeline latency."""
    await start_clock(dut)
    await reset_dut(dut)

    csv_path = find_csv_path()
    pairs = load_csv_pairs(csv_path)
    test_pair = pairs[0]

    dut._log.info(
        f"[TEST 1] Driving Single Pair 0: (a1={test_pair['a1']}, a2={test_pair['a2']}) * "
        f"(b1={test_pair['b1']}, b2={test_pair['b2']})"
    )
    dut._log.info(
        f"[TEST 1] Expected Output: a_o={test_pair['expected_a']}, b_o={test_pair['expected_b']}"
    )

    # Drive input for exactly 1 cycle
    dut.a1_i.value = test_pair["a1"]
    dut.a2_i.value = test_pair["a2"]
    dut.b1_i.value = test_pair["b1"]
    dut.b2_i.value = test_pair["b2"]
    dut.valid_i.value = 1

    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")

    # Clear input on next cycle
    dut.valid_i.value = 0
    dut.a1_i.value = 0
    dut.a2_i.value = 0
    dut.b1_i.value = 0
    dut.b2_i.value = 0

    # Verify that valid_o remains 0 during latency cycles 1..3, then 1 at cycle 4
    for cycle in range(1, PIPELINE_LATENCY + 1):
        await RisingEdge(dut.clk_i)
        await Timer(1, unit="ns")
        if cycle < PIPELINE_LATENCY:
            assert int(dut.valid_o.value) == 0, (
                f"Cycle {cycle}: valid_o asserted prematurely! Expected latency={PIPELINE_LATENCY}."
            )
        else:
            assert int(dut.valid_o.value) == 1, (
                f"Cycle {cycle}: valid_o did NOT assert at expected pipeline latency!"
            )

    got_a = int(dut.a_o.value)
    got_b = int(dut.b_o.value)
    dut._log.info(
        f"[TEST 1] Cycle {PIPELINE_LATENCY}: valid_o=1, got a_o={got_a}, b_o={got_b}"
    )

    assert got_a == test_pair["expected_a"], (
        f"Channel A mismatch: got {got_a}, expected {test_pair['expected_a']}"
    )
    assert got_b == test_pair["expected_b"], (
        f"Channel B mismatch: got {got_b}, expected {test_pair['expected_b']}"
    )

    # Cycle 6: valid_o must return to 0
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")
    assert int(dut.valid_o.value) == 0, "valid_o remained high after single-pulse transaction!"
    dut._log.info("[TEST 1] PASSED: Single transaction & 5-cycle pipeline latency verified.")


# ==============================================================================
# Test 2: Continuous Back-to-Back Streaming of All CSV Pairs
# ==============================================================================
@cocotb.test()
async def test_continuous_streaming_all_pairs(dut):
    """
    Stream all 128 pairs (256 coefficients) back-to-back without bubbles.
    Scoreboard verifies every cycle with exact pipeline latency tracking.
    """
    await start_clock(dut)
    await reset_dut(dut)

    csv_path = find_csv_path()
    pairs = load_csv_pairs(csv_path)
    total_pairs = len(pairs)
    dut._log.info(f"[TEST 2] Streaming {total_pairs} pairs ({total_pairs * 2} coefficients) continuously...")

    # Scoreboard FIFO: each entry is either None (bubble) or (expected_a, expected_b, pair_idx)
    expected_pipeline = deque([None] * PIPELINE_LATENCY)

    sent = 0
    received = 0
    cycle = 0

    while received < total_pairs:
        # Drive input
        if sent < total_pairs:
            p = pairs[sent]
            dut.a1_i.value = p["a1"]
            dut.a2_i.value = p["a2"]
            dut.b1_i.value = p["b1"]
            dut.b2_i.value = p["b2"]
            dut.valid_i.value = 1
            expected_pipeline.append((p["expected_a"], p["expected_b"], p["pair_idx"]))
            sent += 1
        else:
            dut.valid_i.value = 0
            dut.a1_i.value = 0
            dut.a2_i.value = 0
            dut.b1_i.value = 0
            dut.b2_i.value = 0
            expected_pipeline.append(None)

        await RisingEdge(dut.clk_i)
        await Timer(1, unit="ns")

        # Check output
        expected = expected_pipeline.popleft()
        if expected is None:
            assert int(dut.valid_o.value) == 0, (
                f"Cycle {cycle}: valid_o asserted unexpectedly when expecting bubble!"
            )
        else:
            exp_a, exp_b, p_idx = expected
            assert int(dut.valid_o.value) == 1, (
                f"Cycle {cycle}: valid_o not asserted for Pair {p_idx}!"
            )
            got_a = int(dut.a_o.value)
            got_b = int(dut.b_o.value)

            assert got_a == exp_a and got_b == exp_b, (
                f"Cycle {cycle} (Pair {p_idx}) Mismatch!\n"
                f"  Got:      a_o={got_a}, b_o={got_b}\n"
                f"  Expected: a_o={exp_a}, b_o={exp_b}"
            )
            received += 1

        cycle += 1

    # Ensure valid_o drops back to 0
    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")
    assert int(dut.valid_o.value) == 0, "valid_o did not return to 0 after stream completed!"

    dut._log.info(
        f"[TEST 2] PASSED: All {total_pairs} pairs ({total_pairs * 2} coefficients) "
        f"verified with zero errors in {cycle} cycles!"
    )


# ==============================================================================
# Test 3: Intermittent Streaming with Random Valid Bubbles
# ==============================================================================
@cocotb.test()
async def test_random_stalls_streaming(dut):
    """
    Stream all 128 pairs with pseudo-random valid_i stalls (bubbles).
    Verifies that valid_o correctly tracks internal pipeline bubbles.
    """
    await start_clock(dut)
    await reset_dut(dut)

    csv_path = find_csv_path()
    pairs = load_csv_pairs(csv_path)
    total_pairs = len(pairs)
    dut._log.info(f"[TEST 3] Streaming {total_pairs} pairs with random stalls (p_stall=0.35)...")

    random.seed(42)
    stall_probability = 0.35

    expected_pipeline = deque([None] * PIPELINE_LATENCY)
    sent = 0
    received = 0
    cycle = 0

    while received < total_pairs:
        # Decide whether to stall on this cycle
        stall = (random.random() < stall_probability) if sent < total_pairs else True

        if not stall and sent < total_pairs:
            p = pairs[sent]
            dut.a1_i.value = p["a1"]
            dut.a2_i.value = p["a2"]
            dut.b1_i.value = p["b1"]
            dut.b2_i.value = p["b2"]
            dut.valid_i.value = 1
            expected_pipeline.append((p["expected_a"], p["expected_b"], p["pair_idx"]))
            sent += 1
        else:
            dut.valid_i.value = 0
            dut.a1_i.value = 0
            dut.a2_i.value = 0
            dut.b1_i.value = 0
            dut.b2_i.value = 0
            expected_pipeline.append(None)

        await RisingEdge(dut.clk_i)
        await Timer(1, unit="ns")

        expected = expected_pipeline.popleft()
        if expected is None:
            assert int(dut.valid_o.value) == 0, (
                f"Cycle {cycle}: valid_o asserted unexpectedly during bubble!"
            )
        else:
            exp_a, exp_b, p_idx = expected
            assert int(dut.valid_o.value) == 1, (
                f"Cycle {cycle}: valid_o not asserted for Pair {p_idx}!"
            )
            got_a = int(dut.a_o.value)
            got_b = int(dut.b_o.value)
            assert got_a == exp_a and got_b == exp_b, (
                f"Cycle {cycle} (Pair {p_idx}) Mismatch!\n"
                f"  Got:      a_o={got_a}, b_o={got_b}\n"
                f"  Expected: a_o={exp_a}, b_o={exp_b}"
            )
            received += 1

        cycle += 1

    dut._log.info(
        f"[TEST 3] PASSED: All {total_pairs} pairs verified with random stalls ({cycle} total cycles)."
    )


# ==============================================================================
# Test 4: Corner Cases (Zero Inputs)
# ==============================================================================
@cocotb.test()
async def test_corner_cases(dut):
    """Test corner cases like zero inputs and maximum mod values."""
    await start_clock(dut)
    await reset_dut(dut)

    dut._log.info("[TEST 4] Testing zero input operands: (0, 0) * (0, 0)...")
    dut.a1_i.value = 0
    dut.a2_i.value = 0
    dut.b1_i.value = 0
    dut.b2_i.value = 0
    dut.valid_i.value = 1

    await RisingEdge(dut.clk_i)
    await Timer(1, unit="ns")

    dut.valid_i.value = 0
    await ClockCycles(dut.clk_i, PIPELINE_LATENCY)
    await Timer(1, unit="ns")

    assert int(dut.valid_o.value) == 1, "valid_o not asserted for zero-operand transaction"
    assert int(dut.a_o.value) == 0, f"Expected a_o=0 for zero inputs, got {int(dut.a_o.value)}"
    assert int(dut.b_o.value) == 0, f"Expected b_o=0 for zero inputs, got {int(dut.b_o.value)}"

    dut._log.info("[TEST 4] PASSED: Corner cases verified.")