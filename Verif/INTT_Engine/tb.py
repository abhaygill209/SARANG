'''
Take values form /home/abhay/OpenSource/PQC_ASIC/Algo/Input_output_NTT_INTT.csv
Compare input and output values with RTL simulation results from /home/abhay/OpenSource/PQC_ASIC/Verif/INTT_Engine/INTT_engine_axis_wrapper_tb.vcd
AXI Verification Tests:
    |-> Validity of input and output data
    |-> Non-continuous data flow (stalling)
    |-> Backpressure handling
'''
import csv 
import numpy as np

import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.clock import Clock

input = []
ntt_output = []
intt_output = []

with open("/home/abhay/OpenSource/PQC_ASIC/Algo/Input_output_NTT_INTT.csv", "r") as f:
    reader = csv.reader(f)
    next(reader)  # Skip header row

    for row in reader: 
        input.append(int(row[1]))  # Input values
        ntt_output.append(int(row[2]))  # NTT output values
        intt_output.append(int(row[3]))  # INTT output values

async def start_clock(dut, period=10):
    """Start the clock for the DUT."""
    clock = Clock(dut.clk, period, unit="ns")
    cocotb.start_soon(clock.start())

async def reset_dut(dut):
    """Reset the DUT."""
    dut.aresetn.value = 0
    await Timer(20, unit="ns")
    dut.aresetn.value = 1
    await Timer(20, unit="ns")

async def send_data(dut, data):
    """Send 16-bit values packed two per AXI-Stream word."""

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0

    await RisingEdge(dut.clk)

    dut.s_axis_tvalid.value = 1

    for i in range(0, len(data), 2):

        # Pack two 16-bit values into one 32-bit word
        low = int(data[i]) & 0xFFFFFFFF
        high = int(data[i + 1]) & 0xFFFFFFFF if i + 1 < len(data) else 0

        dut.s_axis_tdata.value = low | (high << 32)
        print(f"Sending: {low}, {high}")

        # Last AXI word
        if i + 2 >= len(data):
            dut.s_axis_tlast.value = 1
        else:
            dut.s_axis_tlast.value = 0

        # Wait until transfer actually happens
        while True:
            await RisingEdge(dut.clk)

            if dut.s_axis_tready.value == 1:
                break

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0

async def receive_data(dut):
    """Receive 64-bit AXI-Stream words and unpack them into 32-bit values."""

    received_data = []

    dut.m_axis_tready.value = 1

    while True:
        await RisingEdge(dut.clk)

        if dut.m_axis_tvalid.value == 1:

            word = int(dut.m_axis_tdata.value)

            # Extract two 32-bit values
            low = word & 0xFFFFFFFF
            high = (word >> 32) & 0xFFFFFFFF

            received_data.append(low)
            received_data.append(high)
            print(f"Received: {low}, {high}")
            # End of packet
            if dut.m_axis_tlast.value == 1:
                break

    return received_data

@cocotb.test()
async def test_intt_engine(dut):

    print("\n======================================")
    print("       INTT ENGINE AXI TEST")
    print("======================================")

    # Start clock
    await start_clock(dut)

    # Reset DUT
    await reset_dut(dut)

    # --------------------------------------------------------
    # Initialize AXI signals
    # --------------------------------------------------------

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0
    dut.s_axis_tdata.value = 0

    dut.m_axis_tready.value = 0

    await RisingEdge(dut.clk)

    # --------------------------------------------------------
    # Start receiver
    # --------------------------------------------------------

    receive_task = cocotb.start_soon(receive_data(dut))

    # --------------------------------------------------------
    # Send NTT output into INTT engine
    # --------------------------------------------------------

    await send_data(dut, ntt_output)

    # --------------------------------------------------------
    # Wait for receiver to finish
    # --------------------------------------------------------

    received_data = await receive_task

    # --------------------------------------------------------
    # Compare RTL output with Python golden output
    # --------------------------------------------------------

    output_data = np.array(received_data, dtype=np.int64)

    assert np.array_equal(output_data, intt_output), "INTT output does not match golden reference."

    print("\n======================================")
    print("          TEST PASSED")
    print("======================================")