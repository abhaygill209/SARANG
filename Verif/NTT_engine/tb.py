'''
Verification Testbench for Corrected NTT_engine_axis_wrapper:
- Test 1: Ideal continuous streaming and irregular input stalls
- Test 2: AXI-Compliant Receiver Wait (m_axis_tready waits for m_axis_tvalid)
- Test 3: Downstream Backpressure Stalling (m_axis_tready random throttling)
- Test 4: Back-to-Back Multiple Packets with Concurrent Input & Output Stalls
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

async def reset_dut(dut, initial_m_tready=1):
    """Reset the DUT and initialize control signals."""
    dut.aresetn.value = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0
    dut.s_axis_tdata.value = 0
    dut.m_axis_tready.value = initial_m_tready
    await Timer(20, unit="ns")
    await RisingEdge(dut.clk)
    dut.aresetn.value = 1
    await RisingEdge(dut.clk)

async def send_data(dut, data, stall_prob=0.0, max_stall_cycles=0):
    """Send 16-bit values packed two per AXI-Stream word."""
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0
    await RisingEdge(dut.clk)

    num_words = (len(data) + 1) // 2

    for word_idx in range(num_words):
        i = word_idx

        # Model irregular input arrival
        if stall_prob > 0.0 and random.random() < stall_prob:
            stall_cycles = random.randint(1, max(1, max_stall_cycles))
            dut.s_axis_tvalid.value = 0
            dut.s_axis_tlast.value = 0
            for _ in range(stall_cycles):
                await RisingEdge(dut.clk)

        low = int(data[i]) & 0xFFFFFFFF
        high = int(data[len(data) // 2 + i]) & 0xFFFFFFFF if (len(data) // 2 + i) < len(data) else 0

        dut.s_axis_tdata.value = low | (high << 32)
        is_last = 1 if (word_idx == num_words - 1) else 0
        dut.s_axis_tlast.value = is_last
        dut.s_axis_tvalid.value = 1

        # Handshake: wait for tvalid=1 and tready=1 on posedge
        while True:
            await RisingEdge(dut.clk)
            if dut.s_axis_tready.value == 1:
                break

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value = 0


@cocotb.test()
async def test_01_baseline_and_input_stalls(dut):
    """Test 1: Tests continuous flow and input stalls when m_axis_tready is tied high."""
    await start_clock(dut)

    async def receive_data_ideal():
        received = []
        dut.m_axis_tready.value = 1
        while True:
            await RisingEdge(dut.clk)
            if dut.m_axis_tvalid.value == 1 and dut.m_axis_tready.value == 1:
                word = int(dut.m_axis_tdata.value)
                received.append(word & 0xFFFFFFFF)
                received.append((word >> 32) & 0xFFFFFFFF)
                if dut.m_axis_tlast.value == 1:
                    break
        return received

    for name, sp, sc in [
        ("Continuous Flow", 0.0, 0),
        ("Light Input Stalls", 0.3, 3),
        ("Heavy Input Stalls", 0.6, 8)
    ]:
        cocotb.log.info(f"--- Running: {name} ---")
        await reset_dut(dut, initial_m_tready=1)
        recv_task = cocotb.start_soon(receive_data_ideal())
        await send_data(dut, input_vals, stall_prob=sp, max_stall_cycles=sc)
        received_data = await recv_task
        out = np.array(received_data[:len(ntt_output)], dtype=np.int64)
        assert np.array_equal(out, ntt_output), f"Failed {name}"
        cocotb.log.info(f"PASSED: {name}")


@cocotb.test()
async def test_02_axi_receiver_initial_wait(dut):
    """
    Test 2: AXI-Stream Compliance Check.
    A downstream slave waits for TVALID before asserting TREADY.
    Verifies that the wrapper accepts data and asserts m_axis_tvalid without deadlocking.
    """
    await start_clock(dut)
    cocotb.log.info("--- Running: Receiver waits for m_axis_tvalid before asserting m_axis_tready ---")

    await reset_dut(dut, initial_m_tready=0)

    received = []
    async def receiver():
        dut.m_axis_tready.value = 0
        while True:
            await RisingEdge(dut.clk)
            # If valid, assert ready for subsequent cycle(s)
            if dut.m_axis_tvalid.value == 1:
                if dut.m_axis_tready.value == 1:
                    w = int(dut.m_axis_tdata.value)
                    received.append(w & 0xFFFFFFFF)
                    received.append((w >> 32) & 0xFFFFFFFF)
                    if dut.m_axis_tlast.value == 1:
                        dut.m_axis_tready.value = 0
                        break
                else:
                    # Assert ready only after seeing valid!
                    dut.m_axis_tready.value = 1
            else:
                dut.m_axis_tready.value = 0
        return received

    recv_task = cocotb.start_soon(receiver())
    await send_data(dut, input_vals)

    # Wait for completion with timeout
    timeout_cycles = 2000
    for _ in range(timeout_cycles):
        if recv_task.done():
            break
        await RisingEdge(dut.clk)

    assert recv_task.done(), "DEADLOCK: Receiver waiting for TVALID failed!"
    out = np.array(recv_task.result()[:len(ntt_output)], dtype=np.int64)
    assert np.array_equal(out, ntt_output), "Data mismatch in wait-for-valid test!"
    cocotb.log.info("PASSED: Receiver waits for TVALID without deadlock!")


@cocotb.test()
async def test_03_downstream_backpressure_stalling(dut):
    """
    Test 3: Backpressure Stalling.
    m_axis_tready is randomly deasserted during streaming.
    Verifies that no words are dropped and data is 100% correct.
    """
    await start_clock(dut)
    cocotb.log.info("--- Running: Downstream Backpressure Stalling ---")

    await reset_dut(dut, initial_m_tready=1)

    received_data = []
    async def receiver_with_stalls():
        while True:
            # 35% chance of backpressure stall burst (1 to 4 cycles)
            if random.random() < 0.35:
                dut.m_axis_tready.value = 0
                for _ in range(random.randint(1, 4)):
                    await RisingEdge(dut.clk)
                dut.m_axis_tready.value = 1

            await RisingEdge(dut.clk)
            if dut.m_axis_tvalid.value == 1 and dut.m_axis_tready.value == 1:
                word = int(dut.m_axis_tdata.value)
                received_data.append(word & 0xFFFFFFFF)
                received_data.append((word >> 32) & 0xFFFFFFFF)
                if dut.m_axis_tlast.value == 1:
                    break
        return received_data

    recv_task = cocotb.start_soon(receiver_with_stalls())
    await send_data(dut, input_vals)

    timeout_cycles = 5000
    for _ in range(timeout_cycles):
        if recv_task.done():
            break
        await RisingEdge(dut.clk)

    assert recv_task.done(), f"TIMEOUT: Pipeline hung under backpressure! Received {len(received_data)}/256 values."
    out = np.array(received_data[:len(ntt_output)], dtype=np.int64)
    assert np.array_equal(out, ntt_output), "Data corrupted under backpressure!"
    cocotb.log.info("PASSED: Backpressure handled with zero data loss!")


@cocotb.test()
async def test_04_back_to_back_packets_with_stalls(dut):
    """
    Test 4: Back-to-Back Consecutive Packets with Concurrent Input and Output Stalls.
    Verifies high-throughput multi-packet streaming and tlast alignment.
    """
    await start_clock(dut)
    cocotb.log.info("--- Running: Back-to-Back Consecutive Packets with Concurrent Stalls ---")

    await reset_dut(dut, initial_m_tready=1)

    received_packets = []
    async def receiver_multi(num_packets=2):
        for _ in range(num_packets):
            packet_data = []
            while True:
                if random.random() < 0.25:
                    dut.m_axis_tready.value = 0
                    for _ in range(random.randint(1, 3)):
                        await RisingEdge(dut.clk)
                    dut.m_axis_tready.value = 1

                await RisingEdge(dut.clk)
                if dut.m_axis_tvalid.value == 1 and dut.m_axis_tready.value == 1:
                    word = int(dut.m_axis_tdata.value)
                    packet_data.append(word & 0xFFFFFFFF)
                    packet_data.append((word >> 32) & 0xFFFFFFFF)
                    if dut.m_axis_tlast.value == 1:
                        break
            received_packets.append(packet_data)
        return received_packets

    recv_task = cocotb.start_soon(receiver_multi(num_packets=2))

    # Send Packet 1 with light stalls
    await send_data(dut, input_vals, stall_prob=0.2, max_stall_cycles=2)
    # Immediately send Packet 2 with light stalls
    await send_data(dut, input_vals, stall_prob=0.2, max_stall_cycles=2)

    timeout_cycles = 8000
    for _ in range(timeout_cycles):
        if recv_task.done():
            break
        await RisingEdge(dut.clk)

    assert recv_task.done(), "TIMEOUT: Multi-packet stream hung!"
    packets = recv_task.result()
    assert np.array_equal(packets[0][:len(ntt_output)], ntt_output), "Packet 1 mismatch!"
    assert np.array_equal(packets[1][:len(ntt_output)], ntt_output), "Packet 2 mismatch!"
    cocotb.log.info("PASSED: Back-to-back packets processed with perfect accuracy and framing!")
