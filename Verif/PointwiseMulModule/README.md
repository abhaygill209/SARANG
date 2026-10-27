# Pointwise Multiplier Verification (`PointwiseMulModule`)

Verification environment for the 2-lane pipelined Montgomery Pointwise Multiplier: [`PointwiseMul.v`](../../RTL/PointwiseMul.v).

---

## 1. Module Overview

The module performs parallel Montgomery multiplication on pairs of coefficients (Channels A and B) over the finite field $\mathbb{Z}_Q$:

- **Channel A**: Multiplies `a1_i` by `a2_i` $\to$ Montgomery reduction $\to$ `a_o`
- **Channel B**: Multiplies `b1_i` by `b2_i` $\to$ Montgomery reduction $\to$ `b_o`

### Parameters
- `DATA_WIDTH`: 16 bits
- `Q_WIDTH`: 16 bits
- `Q`: Modulus ($7681$)
- `Q_INV`: $-Q^{-1} \pmod R = 7679$, where $R = 2^{16} = 65536$

### Pipeline Stages
1. **Stage 1 (Operand Multiplication)**: $T_A = a1 \cdot a2$, $T_B = b1 \cdot b2$
2. **Stage 2 (Montgomery Factor)**: $m_A = (T_A \cdot Q_{inv}) \pmod R$
3. **Stage 3 (Correction Factor)**: $corr_A = m_A \cdot Q$
4. **Stage 4 (Montgomery Addition)**: $sum_A = T_A + corr_A$
5. **Stage 5 (Division by $R$ & Reduction)**: $U_A = sum_A \gg 16$, if $U_A \ge Q$ then $U_A - Q$

Total latency from input sampling (`valid_i`) to output assertion (`valid_o`) is **4 clock cycles** (available on cycle 5).

---

## 2. Golden Reference Model

The testbench loads golden vectors from:
[`pointwise_montgomery_results.csv`](../../Algo/pointwise_montgomery_results.csv)

The CSV contains 256 Montgomery-domain coefficients grouped into 128 pairs:
- **Pair $k$**:
  - `a1_i = A_Montgomery[2k]`, `a2_i = B_Montgomery[2k]` $\implies$ `a_o = Output_Montgomery[2k]`
  - `b1_i = A_Montgomery[2k+1]`, `b2_i = B_Montgomery[2k+1]` $\implies$ `b_o = Output_Montgomery[2k+1]`

**Example (First Pair)**:
- Inputs: `(1971, 3738) * (7380, 5256)`
  - $a1 = 1971, a2 = 7380 \implies a_o = 815$
  - $b1 = 3738, b2 = 5256 \implies b_o = 4806$
- Output: `(815, 4806)`

---

## 3. Test Cases

1. **`test_single_transaction_and_latency`**:
   - Drives pair 0 for 1 cycle with `valid_i = 1`.
   - Validates that `valid_o` remains 0 during latency cycles and asserts exactly at latency cycle with `(815, 4806)`.
   - Checks that `valid_o` returns to 0 on the following cycle.

2. **`test_continuous_streaming_all_pairs`**:
   - Streams all 128 pairs (256 coefficients) back-to-back without bubbles (`valid_i = 1`).
   - Uses a pipeline scoreboard FIFO to verify all 128 output pairs against the golden CSV model.

3. **`test_random_stalls_streaming`**:
   - Streams all 128 pairs with pseudo-random bubbles (`valid_i = 0` stalls inserted with 35% probability).
   - Verifies pipeline validity tracking under irregular input conditions.

4. **`test_corner_cases`**:
   - Validates zero input operands `(0, 0) * (0, 0) == (0, 0)`.

---

## 4. Running the Tests

### Option A: Using Cocotb with Verilator (Default)
```bash
./bash.sh
# OR
make SIM=verilator
```

### Option B: Using Cocotb with Icarus Verilog
```bash
make SIM=icarus
```

### Option C: Standalone Verilog Testbench (`tb_PointwiseMul.v`)
```bash
make verilog
```
