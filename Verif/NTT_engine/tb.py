'''
Take values from /home/abhay/OpenSource/PQC_ASIC/Algo/Input_output_NTT_INTT.csv
Compare input and output values with RTL simulation results

AXI Verification Tests:
    |-> Validity of input and output data (ideal continuous flow)
    |-> Non-continuous data flow (input valid stalls / irregular input arrival)
'''
import csv 
import random
import numpy as np

import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock

input_vals = []
ntt_output = []
intt_output = []

with open("/home/abhay/OpenSource/PQC_ASIC/Algo/Input_output_NTT_INTT.csv", "r") as f:
    reader = csv.reader(f)
    next(reader)  # Skip header row

    for row in reader: 
        input_vals.append(int(row[1]))   # Input values
        ntt_output.append(int(row[2]))   # NTT output values
        intt_output.append(int(row[3]))  # INTT output values

async def start_clock(dut, period=10):
    """Start the clock for the DUT."""
    clock = Clock(dut.clk, period, unit="ns")
    cocotb.start_soon(clock.start())

async def reset_dut(dut):
    """Reset the DUT and initialize control signals."""
    dut.aresetn.value = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0
    dut.s_axis_tdata.value = 0
    dut.m_axis_tready.value = 1
    await Timer(20, unit="ns")
    await RisingEdge(dut.clk)
    dut.aresetn.value = 1
    await RisingEdge(dut.clk)

async def send_data(dut, data, stall_prob=0.0, max_stall_cycles=0):
    """
    Send 16-bit values packed two per AXI-Stream word.
    
    Args:
        dut: Device under test
        data: List of values to send
        stall_prob: Probability (0.0 to 1.0) of inserting idle stall cycles before a valid handshake
        max_stall_cycles: Maximum duration of idle cycle bursts when stalling occurs
    """
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0

    await RisingEdge(dut.clk)

    num_words = (len(data) + 1) // 2

    for word_idx in range(num_words):
        i = word_idx

        # Model irregular input arrival / non-continuous flow (tvalid deassertion stalls)
        if stall_prob > 0.0 and random.random() < stall_prob:
            stall_cycles = random.randint(1, max(1, max_stall_cycles))
            dut.s_axis_tvalid.value = 0
            dut.s_axis_tlast.value = 0
            for _ in range(stall_cycles):
                await RisingEdge(dut.clk)

        # Pack two 16-bit values into one 64-bit word (two 32-bit slots)
        low = int(data[i]) & 0xFFFFFFFF
        high = int(data[len(data) // 2 + i]) & 0xFFFFFFFF if i + 1 < len(data) else 0

        dut.s_axis_tdata.value = low | (high << 32)
        is_last = 1 if (word_idx == num_words - 1) else 0
        dut.s_axis_tlast.value = is_last
        dut.s_axis_tvalid.value = 1

        # Wait until transfer handshake actually completes (tvalid=1 and tready=1 on posedge)
        while True:
            await RisingEdge(dut.clk)
            if dut.s_axis_tready.value == 1:
                break

    # Deassert signals after packet transmission is complete
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0

async def receive_data(dut):
    """
    Receive 64-bit AXI-Stream words and unpack them into 32-bit values.
    m_axis_tready is held high so the DUT can continuously stream out data.
    """
    received_data = []
    dut.m_axis_tready.value = 1

    while True:
        await RisingEdge(dut.clk)

        # Check for successful handshake
        if dut.m_axis_tvalid.value == 1 and dut.m_axis_tready.value == 1:
            word = int(dut.m_axis_tdata.value)

            # Extract two 32-bit values
            low = word & 0xFFFFFFFF
            high = (word >> 32) & 0xFFFFFFFF

            received_data.append(low)
            received_data.append(high)

            # End of packet indicated by tlast
            if dut.m_axis_tlast.value == 1:
                break

    return received_data


async def run_ntt_test_case(dut, test_name, stall_prob=0.0, max_stall_cycles=0):
    """Helper to run a complete reset-drive-receive-verify test cycle."""
    cocotb.log.info("==================================================")
    cocotb.log.info(f" RUNNING: {test_name}")
    cocotb.log.info(f" stall_prob={stall_prob}, max_stall_cycles={max_stall_cycles}")
    cocotb.log.info("==================================================")

    await reset_dut(dut)

    recv_task = cocotb.start_soon(receive_data(dut))
    await send_data(dut, input_vals, stall_prob=stall_prob, max_stall_cycles=max_stall_cycles)

    received_data = await recv_task
    output_data = np.array(received_data[:len(ntt_output)], dtype=np.int64)

    cocotb.log.info(f"First 10 expected NTT values: {ntt_output[:10]}")
    cocotb.log.info(f"First 10 received RTL values: {list(output_data[:10])}")

    assert np.array_equal(output_data, ntt_output), (
        f"{test_name}: Mismatch found! Received {len(output_data)} values."
    )
    cocotb.log.info(f"PASSED: {test_name}")


@cocotb.test()
async def test_ntt_all(dut):
    """NTT verification covering continuous flow and irregular input stalls."""
    # Start clock
    await start_clock(dut)

    # 1. Baseline continuous flow
    await run_ntt_test_case(
        dut,
        test_name="Test 1: Continuous Data Flow",
        stall_prob=0.0,
        max_stall_cycles=0
    )

    # 2. Irregular input arrivals (s_axis_tvalid stalls with small bubbles)
    await run_ntt_test_case(
        dut,
        test_name="Test 2: Irregular Inputs (Light Stalls)",
        stall_prob=0.3,
        max_stall_cycles=3
    )

    # 3. Irregular input arrivals (s_axis_tvalid stalls with longer bubbles)
    await run_ntt_test_case(
        dut,
        test_name="Test 3: Irregular Inputs (Heavy Stalls)",
        stall_prob=0.6,
        max_stall_cycles=8
    )
