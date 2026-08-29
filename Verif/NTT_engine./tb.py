import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles
import sys
import random

# Add the path to the Algo directory
sys.path.append('/home/abhay/OpenSource/PolyMulAcc/Codes_0.1/Algo')
from MontgomeryMul import Montgomery

# Parameters from the DUT
Q = 3329
R = 2**16

# Create a Montgomery instance for conversion
mont = Montgomery(Q, R)

async def butterfly_test(dut):
    # Start clock
    clock = Clock(dut.clk, 10, units="ns")  # 10ns period = 100MHz
    cocotb.start_soon(clock.start())

    # Reset
    dut.rst.value = 1
    dut.valid_i.value = 0
    dut.stall.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    dut.w.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)

    # Test loop
    for test_num in range(100):
        # Generate random inputs in the range [0, Q-1]
        a = random.randint(0, Q-1)
        b = random.randint(0, Q-1)
        w_val = random.randint(0, Q-1)

        # Convert to Montgomery form
        a_mont = mont.to_mont(a)
        b_mont = mont.to_mont(b)
        w_mont = mont.to_mont(w_val)

        # Apply inputs
        dut.a_i.value = a_mont
        dut.b_i.value = b_mont
        dut.w.value = w_mont
        dut.valid_i.value = 1

        # Wait for the input to be accepted (when stall is low)
        while dut.stall.value:
            await RisingEdge(dut.clk)

        # Wait for one clock cycle to let the input be registered
        await RisingEdge(dut.clk)
        dut.valid_i.value = 0  # Deassert valid after one cycle

        # Wait for 4 cycles for the output to appear (pipeline latency)
        await ClockCycles(dut.clk, 4)

        # Check the output
        # The output a_o and b_o are in Montgomery form? We will convert them to regular form using the Montgomery class.
        a_out_mont = dut.a_o.value.integer
        b_out_mont = dut.b_o.value.integer

        # Convert to regular form
        a_out_reg = mont.from_mont(a_out_mont)
        b_out_reg = mont.from_mont(b_out_mont)

        # Compute expected regular values
        expected_a = (a + b * w_val) % Q
        expected_b = (a - b * w_val) % Q
        if expected_b < 0:
            expected_b += Q

        # Compare
        assert a_out_reg == expected_a, f"Test {test_num}: a_o mismatch. Got {a_out_reg}, expected {expected_a}"
        assert b_out_reg == expected_b, f"Test {test_num}: b_o mismatch. Got {b_out_reg}, expected {expected_b}"

        # Optional: print every 10 tests
        if test_num % 10 == 0:
            cocotb.log.info(f"Test {test_num} passed")

    cocotb.log.info("All tests passed")

@cocotb.test()
async def test_butterfly(dut):
    await butterfly_test(dut)