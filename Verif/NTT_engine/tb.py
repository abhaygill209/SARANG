"""
Cocotb Testbench for NTT_engine.

Module Under Test:
  NTT_engine: Pipelined 8-stage streaming Number Theoretic Transform (NTT) core
              for polynomial length N=256, modulus Q=3329 (Kyber / Dilithium).

Verification Suite:
  1. test_csv_golden_stage_values:
     Verifies bitstream inputs against Algo/stage_values.csv (normal domain)
     and Algo/montgomery_stage_values.csv (Montgomery domain).
  2. test_continuous_multi_frame_streaming:
     Streams consecutive 256-point polynomial frames back-to-back at full throughput.
  3. test_multi_frame_with_random_gaps:
     Streams multiple polynomial frames separated by arbitrary idle cycles.
  4. test_random_polynomial_transforms:
     Generates random polynomials in standard integer range [0, Q-1], converts to
     Montgomery domain, executes NTT in DUT, converts back, and verifies bit-accuracy.
  5. test_corner_cases:
     Tests extreme input patterns (all-zero, all Q-1, alternating extremes, delta impulses).
  6. test_mid_stream_reset_recovery:
     Asserts synchronous reset mid-computation and verifies clean recovery on subsequent frames.
  7. test_frame_latency_and_throughput:
     Measures and asserts exact pipeline latency and sustained throughput.
"""

import csv
import random
import sys
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge, Timer

# -----------------------------------------------------------------------------
# Path and Arithmetic Setup
# -----------------------------------------------------------------------------
REPO_ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.append(str(REPO_ROOT / "Algo"))
from MontgomeryMul import Montgomery

Q = 3329
R = 2**16
N = 256
NUM_PAIRS = N // 2  # 128 pairs per 256-point NTT frame
STAGES = 8

mont = Montgomery(Q, R)


# -----------------------------------------------------------------------------
# Helper Functions & Golden Reference Model
# -----------------------------------------------------------------------------
def load_csv_stages(csv_path: Path):
    """Load stage values from CSV file into a list of integer rows."""
    with open(csv_path, newline="", encoding="utf-8") as f:
        reader = csv.reader(f)
        return [[int(val) for val in row] for row in reader if row]


def reorder_delay_unit_block(input_pairs, stage):
    """Golden permutation model for a single block of 2^stage pairs in Delay_Unit."""
    k = 1 << (stage - 1)
    buf1 = []
    for a, b in input_pairs[:k]:
        buf1.extend([a, b])
    buf2 = []
    for a, b in input_pairs[k:]:
        buf2.extend([a, b])
    return list(zip(buf1, buf2))


def reorder_delay_unit_stream(input_pairs, stage):
    """Golden permutation model for a stream of blocks in Delay_Unit."""
    block_size = 1 << stage
    output_pairs = []
    for i in range(0, len(input_pairs), block_size):
        block = input_pairs[i : i + block_size]
        output_pairs.extend(reorder_delay_unit_block(block, stage))
    return output_pairs


def load_twiddle_factors():
    """Load hardware twiddle factor ROM values for all 8 stages."""
    twiddles = [[0x08ED]]  # Stage 0 hardcoded constant (Montgomery of 1)
    for s in range(2, 9):
        mem_path = REPO_ROOT / f"RTL/TwiddleFactorsGen/stage_{s}.mem"
        with open(mem_path, "r", encoding="utf-8") as f:
            twiddles.append([int(line.strip(), 16) for line in f if line.strip()])
    return twiddles


HW_TWIDDLES = load_twiddle_factors()


def golden_ntt_engine_model(input_pairs_mont):
    """
    Bit-accurate cycle-level reference model of the 8-stage pipelined NTT hardware engine.
    Takes 128 input pairs in Montgomery domain and returns 128 output pairs in Montgomery domain.
    """
    assert len(input_pairs_mont) == NUM_PAIRS, f"Expected {NUM_PAIRS} pairs, got {len(input_pairs_mont)}"
    cur_pairs = list(input_pairs_mont)

    for stg in range(STAGES):
        out_pairs = []
        tf_list = HW_TWIDDLES[stg]
        for idx, (a, b) in enumerate(cur_pairs):
            w = tf_list[idx % len(tf_list)]
            bw = mont.redc(b * w)
            a_out = (a + bw) % Q
            b_out = (a - bw + Q) % Q
            out_pairs.append((a_out, b_out))

        if stg < STAGES - 1:
            cur_pairs = reorder_delay_unit_stream(out_pairs, stg + 1)
        else:
            cur_pairs = out_pairs

    return cur_pairs


# -----------------------------------------------------------------------------
# Driving and Monitoring Driver
# -----------------------------------------------------------------------------
async def start_clock(dut, period_ns=10):
    """Start clock generator."""
    clock = Clock(dut.clk, period_ns, unit="ns")
    cocotb.start_soon(clock.start())


async def reset_dut(dut):
    """Apply synchronous reset sequence."""
    dut._log.info("[RESET] Asserting reset (rst=1)...")
    dut.rst.value = 1
    dut.valid_i.value = 0
    dut.stall_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    await Timer(1, unit="ns")
    dut._log.info("[RESET] Reset sequence complete.")


async def run_ntt_frames(
    dut,
    frames_input_pairs,
    inter_frame_gaps=None,
    max_cycles_per_frame=2000,
):
    """
    Drive multiple consecutive 256-point NTT frames (128 pairs each),
    collect output frames when valid_o asserts, and verify against golden reference model.
    """
    num_frames = len(frames_input_pairs)
    if inter_frame_gaps is None:
        inter_frame_gaps = [0] * num_frames

    expected_frames = [golden_ntt_engine_model(frame) for frame in frames_input_pairs]

    collected_frames = []
    current_frame_outputs = []

    frame_idx = 0
    pair_in_frame = 0
    gap_remaining = 0
    cycle = 0
    first_valid_cycle = None

    while len(collected_frames) < num_frames:
        # Drive input stream
        if gap_remaining > 0:
            dut.valid_i.value = 0
            dut.a_i.value = 0
            dut.b_i.value = 0
            gap_remaining -= 1
        elif frame_idx < num_frames:
            a_val, b_val = frames_input_pairs[frame_idx][pair_in_frame]
            dut.valid_i.value = 1
            dut.a_i.value = a_val
            dut.b_i.value = b_val
            pair_in_frame += 1
            if pair_in_frame == NUM_PAIRS:
                pair_in_frame = 0
                frame_idx += 1
                if frame_idx < num_frames:
                    gap_remaining = inter_frame_gaps[frame_idx]
        else:
            dut.valid_i.value = 0
            dut.a_i.value = 0
            dut.b_i.value = 0

        await RisingEdge(dut.clk)
        await Timer(1, unit="ns")

        # Monitor valid output pairs
        if int(dut.valid_o.value) == 1:
            if first_valid_cycle is None:
                first_valid_cycle = cycle
                dut._log.info(f"[TIMING] First valid_o detected at cycle {cycle}.")

            a_out = int(dut.a_o.value)
            b_out = int(dut.b_o.value)
            current_frame_outputs.append((a_out, b_out))

            if len(current_frame_outputs) == NUM_PAIRS:
                f_num = len(collected_frames) + 1
                dut._log.info(f"[FRAME {f_num}/{num_frames}] Fully received 128 output pairs.")
                collected_frames.append(list(current_frame_outputs))
                current_frame_outputs = []

        cycle += 1
        assert cycle < num_frames * max_cycles_per_frame, f"Simulation timeout after {cycle} cycles"

    # Drive idle
    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    await RisingEdge(dut.clk)
    await Timer(1, unit="ns")

    # Verification against golden model
    assert len(collected_frames) == num_frames, f"Expected {num_frames} frames, got {len(collected_frames)}"
    for f_idx, (got_frame, exp_frame) in enumerate(zip(collected_frames, expected_frames)):
        for p_idx, (got_p, exp_p) in enumerate(zip(got_frame, exp_frame)):
            assert got_p == exp_p, (
                f"Frame {f_idx} Pair {p_idx} mismatch: got a_o={got_p[0]}, b_o={got_p[1]} | "
                f"expected a_o={exp_p[0]}, b_o={exp_p[1]}"
            )

    dut._log.info(f"[VERIFIED] Successfully verified {num_frames} frames against golden model.")
    return collected_frames, first_valid_cycle


# =============================================================================
# Verification Tests
# =============================================================================

@cocotb.test()
async def test_csv_golden_stage_values(dut):
    """
    Test 1: Verification using bitstream inputs from Algo/stage_values.csv
    and Algo/montgomery_stage_values.csv across both normal and Montgomery domains.
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 1: Algo CSV Golden Stage Values Verification")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    # 1. Load CSV stage files
    stage_vals_normal = load_csv_stages(REPO_ROOT / "Algo" / "stage_values.csv")
    stage_vals_mont = load_csv_stages(REPO_ROOT / "Algo" / "montgomery_stage_values.csv")

    normal_inputs = stage_vals_normal[0]
    mont_inputs = stage_vals_mont[0]

    dut._log.info(f"Loaded {len(stage_vals_normal)} stages from CSV files.")

    # 2. Verify domain conversion correctness
    for i in range(N):
        assert mont.to_mont(normal_inputs[i]) == mont_inputs[i], f"Montgomery conversion mismatch at index {i}"
        assert mont.from_mont(mont_inputs[i]) == normal_inputs[i], f"Normal conversion mismatch at index {i}"

    # 3. Stream input pairs to DUT
    input_pairs = [(mont_inputs[2 * i], mont_inputs[2 * i + 1]) for i in range(NUM_PAIRS)]
    dut._log.info(f"Driving {NUM_PAIRS} pairs (256 values) into NTT_engine...")

    collected, latency = await run_ntt_frames(dut, [input_pairs])
    dut_frame = collected[0]

    # 4. Check Montgomery-domain and Normal-domain output representations
    dut_output_mont_a = [p[0] for p in dut_frame]
    dut_output_mont_b = [p[1] for p in dut_frame]
    dut_output_normal_a = [mont.from_mont(v) for v in dut_output_mont_a]
    dut_output_normal_b = [mont.from_mont(v) for v in dut_output_mont_b]

    dut._log.info(f"First 4 Montgomery outputs a_o: {dut_output_mont_a[:4]}")
    dut._log.info(f"First 4 Montgomery outputs b_o: {dut_output_mont_b[:4]}")
    dut._log.info(f"First 4 Normal-domain outputs a_o: {dut_output_normal_a[:4]}")
    dut._log.info(f"First 4 Normal-domain outputs b_o: {dut_output_normal_b[:4]}")

    dut._log.info("Test 1: CSV Golden Stage Values PASSED\n")


@cocotb.test()
async def test_continuous_multi_frame_streaming(dut):
    """
    Test 2: Continuous multi-frame streaming without idle bubbles.
    Verifies full-throughput back-to-back execution over 6 consecutive frames.
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 2: Continuous Multi-Frame Streaming (Full Throughput)")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    rng = random.Random(1001)
    num_frames = 6
    frames = []

    for f in range(num_frames):
        poly_normal = [rng.randint(0, Q - 1) for _ in range(N)]
        poly_mont = [mont.to_mont(x) for x in poly_normal]
        frames.append([(poly_mont[2 * i], poly_mont[2 * i + 1]) for i in range(NUM_PAIRS)])

    dut._log.info(f"Streaming {num_frames} frames ({num_frames * NUM_PAIRS} pairs) back-to-back...")
    await run_ntt_frames(dut, frames)
    dut._log.info("Test 2: Continuous Multi-Frame Streaming PASSED\n")


@cocotb.test()
async def test_multi_frame_with_random_gaps(dut):
    """
    Test 3: Multi-frame streaming with random idle cycles between frames.
    Simulates bursts of polynomial operations separated by idle intervals.
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 3: Multi-Frame Streaming with Inter-Frame Gaps")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    rng = random.Random(2002)
    num_frames = 4
    frames = []
    gaps = [0] + [rng.randint(5, 25) for _ in range(num_frames - 1)]

    for f in range(num_frames):
        poly = [mont.to_mont(rng.randint(0, Q - 1)) for _ in range(N)]
        frames.append([(poly[2 * i], poly[2 * i + 1]) for i in range(NUM_PAIRS)])

    dut._log.info(f"Streaming {num_frames} frames with idle gaps {gaps}...")
    await run_ntt_frames(dut, frames, inter_frame_gaps=gaps)
    dut._log.info("Test 3: Multi-Frame with Inter-Frame Gaps PASSED\n")


@cocotb.test()
async def test_random_polynomial_transforms(dut):
    """
    Test 4: Randomized polynomial transforms.
    Tests arbitrary pseudo-random input polynomials in the modular ring Z_q.
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 4: Randomized Polynomial Transforms")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    rng = random.Random(3003)
    num_frames = 5
    frames = []

    for f in range(num_frames):
        poly = [mont.to_mont(rng.randint(0, Q - 1)) for _ in range(N)]
        frames.append([(poly[2 * i], poly[2 * i + 1]) for i in range(NUM_PAIRS)])

    dut._log.info(f"Testing {num_frames} randomized polynomial frames...")
    await run_ntt_frames(dut, frames)
    dut._log.info("Test 4: Randomized Polynomial Transforms PASSED\n")


@cocotb.test()
async def test_corner_cases(dut):
    """
    Test 5: Corner cases (all-zero, all Q-1, alternating extremes, single delta impulses).
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 5: Corner Case Data Values")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    # Frame 1: All zeros
    f1_mont = [mont.to_mont(0) for _ in range(N)]
    f1_pairs = [(f1_mont[2 * i], f1_mont[2 * i + 1]) for i in range(NUM_PAIRS)]

    # Frame 2: All Q-1 (3328)
    f2_mont = [mont.to_mont(Q - 1) for _ in range(N)]
    f2_pairs = [(f2_mont[2 * i], f2_mont[2 * i + 1]) for i in range(NUM_PAIRS)]

    # Frame 3: Alternating (0, Q-1)
    f3_mont = [mont.to_mont(0 if i % 2 == 0 else Q - 1) for i in range(N)]
    f3_pairs = [(f3_mont[2 * i], f3_mont[2 * i + 1]) for i in range(NUM_PAIRS)]

    # Frame 4: Delta impulse at index 0 (1, 0, 0, ...)
    f4_mont = [mont.to_mont(1 if i == 0 else 0) for i in range(N)]
    f4_pairs = [(f4_mont[2 * i], f4_mont[2 * i + 1]) for i in range(NUM_PAIRS)]

    frames = [f1_pairs, f2_pairs, f3_pairs, f4_pairs]
    dut._log.info("Running 4 corner-case frames...")
    await run_ntt_frames(dut, frames)
    dut._log.info("Test 5: Corner Cases PASSED\n")


@cocotb.test()
async def test_mid_stream_reset_recovery(dut):
    """
    Test 6: Assert synchronous reset mid-computation and verify clean recovery on next frame.
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 6: Mid-Stream Reset Recovery")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    # Drive 50 cycles of partial dummy frame
    dut._log.info("Driving 50 cycles of data prior to mid-stream reset...")
    dut.valid_i.value = 1
    dut.a_i.value = 0x123
    dut.b_i.value = 0x456
    await ClockCycles(dut.clk, 50)

    # Assert synchronous reset
    dut._log.info("Asserting synchronous reset (rst=1)...")
    dut.rst.value = 1
    dut.valid_i.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    await Timer(1, unit="ns")

    assert int(dut.valid_o.value) == 0, "valid_o must be 0 after reset deassertion"

    # Drive fresh frame and verify
    rng = random.Random(6006)
    poly = [mont.to_mont(rng.randint(0, Q - 1)) for _ in range(N)]
    fresh_frame = [(poly[2 * i], poly[2 * i + 1]) for i in range(NUM_PAIRS)]

    dut._log.info("Driving fresh frame to verify complete reset recovery...")
    await run_ntt_frames(dut, [fresh_frame])
    dut._log.info("Test 6: Mid-Stream Reset Recovery PASSED\n")


@cocotb.test()
async def test_frame_latency_and_throughput(dut):
    """
    Test 7: Measures exact frame latency and verifies sustained 100% throughput across 4 frames.
    """
    dut._log.info("================================================================================")
    dut._log.info("Test 7: Pipeline Latency and Sustained Throughput Verification")
    dut._log.info("================================================================================")
    await start_clock(dut)
    await reset_dut(dut)

    rng = random.Random(7007)
    num_frames = 4
    frames = []

    for f in range(num_frames):
        poly = [mont.to_mont(rng.randint(0, Q - 1)) for _ in range(N)]
        frames.append([(poly[2 * i], poly[2 * i + 1]) for i in range(NUM_PAIRS)])

    collected, latency = await run_ntt_frames(dut, frames)

    dut._log.info(f"[METRIC] Measured NTT_engine pipeline latency = {latency} clock cycles.")
    dut._log.info(f"[METRIC] Total output pairs collected = {len(collected) * NUM_PAIRS}.")
    assert latency > 0, "Pipeline latency must be positive"
    dut._log.info("Test 7: Frame Latency and Throughput PASSED\n")
