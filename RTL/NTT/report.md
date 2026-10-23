# Verification & Vulnerability Assessment Report: NTT Engine AXI-Stream Wrapper

- **Target File**: [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v)
- **Module Under Test**: `NTT_engine_axis_wrapper`
- **Associated RTL**: [`NTT_enigne.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_enigne.v), [`Delay_unit_1.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit_1.v), [`ButterflyUnitGS.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/ButterflyUnitGS.v), [`FIFO.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/FIFO.v)
- **Verification Suite**: [`Verif/NTT_engine/tb.py`](file:///home/abhay/OpenSource/PQC_ASIC/Verif/NTT_engine/tb.py)
- **Simulator & Environment**: Verilator 5.042, CocoTB 2.0.1, Python 3.10

---

## 1. Executive Summary

A comprehensive functional verification and hardware security evaluation was conducted on the AXI4-Stream wrapper for the Number Theoretic Transform (NTT) core. 

> [!CAUTION]
> **Verification Verdict: FAILED**  
> While the wrapper passes basic tests under ideal conditions where the downstream receiver holds `m_axis_tready = 1` continuously, it **violates the ARM AMBA AXI4-Stream protocol** and **collapses under downstream backpressure**. Deploying this code on an FPGA in a System-on-Chip (SoC) environment introduces severe vulnerabilities, including complete AXI interconnect lockup (DoS), silent data corruption (exploitable via Decryption Failure Attacks), and side-channel leakage.

---

## 2. Empirical Verification Results

Using the enhanced test suite in [`Verif/NTT_engine/tb.py`](file:///home/abhay/OpenSource/PQC_ASIC/Verif/NTT_engine/tb.py), the DUT was simulated against four distinct operational scenarios:

| Test Case | Stimulus & Handshake Scenario | Status | Measured Behavior |
| :--- | :--- | :---: | :--- |
| **Test 1: Baseline Streaming & Input Stalls** | `m_axis_tready = 1`; random bubbles inserted on `s_axis_tvalid`. | **PASS** | Successfully processed 256 coefficients across continuous and bursty input patterns. |
| **Test 2: AXI-Compliant Receiver Handshake** | Downstream receiver holds `m_axis_tready = 0` until `m_axis_tvalid = 1`. | **FAIL (DEADLOCK)** | Upstream `s_axis_tready` remained locked at `0`. No data was ever accepted or transmitted; permanent bus freeze. |
| **Test 3: Downstream Backpressure Stalling** | `m_axis_tready` throttled dynamically (30% stall probability, 1–3 cycle bursts). | **FAIL (DATA LOSS)** | Core produced between 4 and 20 words, then stalled indefinitely. Internal FIFOs lost synchronization; 90%+ of polynomial data was lost. |
| **Test 4: Packet Framing Anomaly** | Truncated 32-word packet with `s_axis_tlast = 1` followed by a full 128-word packet. | **FAIL (DESYNC)** | Module merged partial packet with subsequent data, permanently corrupting frame boundaries and locking pipeline. |

---

## 3. Detailed RTL Protocol & Functional Defects

```
                        AXI-STREAM FLOW DIAGRAM
                        
       Upstream Master                              Downstream Slave
     [ CPU / AXI DMA ]                            [ CPU / AXI DMA ]
             │                                            ▲
s_axis_tvalid│ ┌────────────────────────────────────────┐ │m_axis_tvalid
────────────►│ │ s_axis_tready = ~stall_i (DEADLOCK!)   │ ├────────────►
s_axis_tready│ │ stall_i = ~m_axis_tready               │ │m_axis_tready
◄────────────┤ │                                        │ │◄────────────
s_axis_tdata │ │  ┌──────────────┐   ┌───────────────┐  │ │m_axis_tdata
────────────►│ │  │ButterflyUnits│◄-►│  Delay_Units  │  │ ├────────────►
s_axis_tlast │ │  └──────────────┘   └───────────────┘  │ │m_axis_tlast
───[NC]──────┘ │                                        │ ├────────────►
(UNCONNECTED)  │  out_cnt[7:0] (Blind Free-Running CTR) │ │
               └────────────────────────────────────────┘ ┘
```

### 3.1. Circular Handshake Coupling / Immediate Deadlock
Lines 31–36 of [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v#L31-L36):
```verilog
wire stall_i;
assign stall_i = ~m_axis_tready;

// We can accept data when not stalled
assign s_axis_tready = ~stall_i; 
```
* **Protocol Violation**: The ARM AMBA 4 AXI-Stream Protocol Specification (Section 2.2.1) explicitly states:
  > *"A receiver is permitted to wait for TVALID to be asserted before asserting the corresponding TREADY."*
* **Failure Mechanism**: Many standard AXI DMAs and slave peripherals hold `TREADY = 0` until they detect `TVALID = 1`. Because this wrapper combinationally sets `s_axis_tready = m_axis_tready`:
  1. Downstream waits with `m_axis_tready = 0` until `m_axis_tvalid = 1`.
  2. Wrapper forces `s_axis_tready = 0`.
  3. Upstream transmitter cannot send input data because `s_axis_tready == 0`.
  4. The NTT engine never receives input and never produces output (`m_axis_tvalid` remains `0`).
  5. **Result: Both ends wait for each other indefinitely. The bus freezes permanently.**

### 3.2. Backpressure Pipeline Collapse & Data Loss
* When `m_axis_tready` deasserts, `stall_i` goes high.
* In [`Delay_unit_1.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit_1.v#L335-L348):
  ```verilog
  always @(posedge clk_i) begin
      if (rst_i) begin
          valid_o      <= 1'b0;
          read_pair1_q <= 1'b0;
      end else begin
          valid_o <= read_enable;
          if (read_enable)
              read_pair1_q <= read_pair1;
      end
  end
  ```
  `read_enable` is gated with `!stall_i`. When `stall_i = 1`, `read_enable` drops to `0`. On the following clock cycle, `valid_o` deasserts to `0` inside the delay units, even though valid data was already extracted from the FIFO.
* The wrapper lacks an **output skid buffer / register slice**. When backpressure is applied, `m_axis_tvalid` drops illegally while waiting for `m_axis_tready`, corrupting internal burst tracking (`burst_active`, `output_counter`) and permanently halting the pipeline.

### 3.3. Unconnected Input Packet Framing (`s_axis_tlast`)
* Port `s_axis_tlast` is declared on line 13 but is completely unused.
* The module assumes every input transaction consists of exactly 128 words. If a DMA or network interface sends a truncated burst, an abort signal, or misaligned data, the internal pipeline registers and FIFOs cannot recover or re-align to packet boundaries.

### 3.4. Fragile Free-Running `m_axis_tlast` Generation
Lines 67–80:
```verilog
always @(posedge clk) begin
    if (rst) begin
        out_cnt <= 8'd0;
    end else if (m_axis_tvalid && m_axis_tready) begin
        if (out_cnt == 8'd127)
            out_cnt <= 8'd0;
        else
            out_cnt <= out_cnt + 1;
    end
end
assign m_axis_tlast = (out_cnt == 8'd127) && m_axis_tvalid;
```
* `out_cnt` is not synchronized to input frames or stage delays. Any glitch, backpressure stall anomaly, or partial reset causes `out_cnt` to permanently assert `m_axis_tlast` at incorrect coefficient indices.

### 3.5. Non-Synthesizable Simulation Directives
Lines 21–24:
```verilog
initial begin
    $dumpfile("waveform.vcd");
    $dumpvars(0, NTT_engine_axis_wrapper);
end
```
* Simulation system tasks must never be placed inside synthesizable IP blocks without preprocessor guards (` `ifndef SYNTHESIS `), as they create errors or warnings in production FPGA synthesis tools (Vivado, Quartus, Libero).

---

## 4. FPGA Hardware Security Vulnerabilities

Deploying this wrapper on an FPGA accelerator card or SoC (e.g., AMD-Xilinx Zynq UltraScale+, Kria, or Intel Agilex) exposes multiple hardware-level vulnerabilities:

```
                            THREAT TAXONOMY
                            
 ┌────────────────────────────────────────────────────────────────────────┐
 │ 1. System Hang (DoS)         - Locked DMA Channels & Bus Freezes       │
 │ 2. Decryption Failure (DFA)  - Controlled Side-Channel Fault Injection │
 │ 3. Secret Key Remanence      - Un-zeroized BRAM/LUTRAM Across Resets   │
 │ 4. Power/EM Side-Channel     - Unmasked Constant-Time Violations       │
 │ 5. Metastability / Glitch    - Asynchronous Reset Distribution         │
 └────────────────────────────────────────────────────────────────────────┘
```

### 4.1. Interconnect Lockup & System-Wide Denial of Service (DoS)
* **Threat**: In a shared SoC system, an unprivileged user or peripheral that interacts with the cryptographic accelerator can induce an AXI transaction when the output DMA channel is not pre-armed.
* **Impact**: The wrapper deadlocks `s_axis_tready` and `m_axis_tvalid`. The AXI SmartConnect / Interconnect will stall pending transactions, causing the Linux AXI DMA kernel driver to hang waiting for interrupts. This causes kernel thread starvation and requires a hard hardware reset of the entire SoC.

### 4.2. Decryption Failure Attacks (DFA) via Backpressure Exploitation
* **Threat**: In lattice-based post-quantum cryptography (e.g., ML-KEM / Kyber, ML-DSA / Dilithium), decryption failures are mathematically correlated with the secret key vector.
* **Mechanism**: Because backpressure drops coefficient beats silently without asserting an AXI error flag, a co-located malicious software thread running on the host CPU can create high DDR memory bus contention. This contention introduces backpressure stalls on the AXI DMA during NTT output streaming, selectively dropping coefficients and triggering decryption failures that can be analyzed to extract secret keys.

### 4.3. Multi-Tenant Cross-Session State Pollution
* **Threat**: If User Session A aborts a transaction midway through an NTT transform, residual polynomial coefficients remain buffered in the internal FIFOs of [`Delay_unit_1.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit_1.v).
* **Impact**: When User Session B sends an NTT workload, Session B's initial inputs are paired with Session A's residual coefficients. In multi-tenant FPGA acceleration (e.g., cloud FPGA instances), this causes cross-tenant confidential data leakage and arithmetic corruption.

### 4.4. Secret Remanence & Zeroization Failure (FIPS 140-3 Non-Compliance)
* In [`FIFO.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/FIFO.v#L38-L75):
  ```verilog
  always @(posedge clk) begin
      if (rst) begin
          wr_ptr <= 0;
          rd_ptr <= 0;
          count  <= 0;
          dout   <= 0;
      end
  ```
* Resetting the core zeroes the pointers but **leaves the `mem` array contents intact in FPGA Block RAM / UltraRAM / LUTRAM**.
* An attacker using FPGA JTAG readback, partial reconfiguration, or warm reboot scanning can read out residual private polynomial coefficients from un-cleared memory cells, directly violating NIST FIPS 140-3 zeroization requirements.

### 4.5. Reset Metastability & Fault Injection Sensitivity
Line 28:
```verilog
assign rst = ~aresetn;
```
* **Metastability Risk**: `aresetn` is an asynchronous AXI reset. Feeding `~aresetn` combinational logic directly to hundreds of pipeline flip-flops, DSP slices, and BRAMs without a synchronous deassertion tree violates reset recovery and removal timing.
* **Fault Injection**: An attacker injecting a microsecond voltage glitch or clock jitter on the reset pin can cause different stages of the NTT pipeline to exit reset on different clock cycles. This forces the twiddle-factor address generators and butterfly pipelines out of phase, producing corrupt modular arithmetic outputs suitable for differential fault attacks.

### 4.6. Side-Channel Analysis (SCA) - Power & Electromagnetic Leakage
* In [`ButterflyUnitGS.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/ButterflyUnitGS.v#L71-L76):
  ```verilog
  wire [DATA_WIDTH:0] diff_temp =
      (a_i >= b_i)
      ? ({1'b0, a_i} - {1'b0, b_i})
      : ({1'b0, a_i} + {1'b0, Q[DATA_WIDTH-1:0]} - {1'b0, b_i});
  ```
* The conditional addition/subtraction creates data-dependent switching activity. The circuit lacks masking, blinding, or register-level constant-weight balancing.
* An attacker measuring electromagnetic emissions (EMA) or power traces (CPA) on the FPGA core voltage rail ($V_{\text{CCINT}}$) can recover intermediate polynomial values during private key operations.

---

## 5. Architectural Hardening & Recommendations

### 5.1. AXI-Stream Skid Buffer / Register Slice
Decouple input and output handshakes using standard skid buffers. The wrapper must **never** combinatorially tie `s_axis_tready` to `m_axis_tready`.

```verilog
// Recommended Skid Buffer Output Stage Template
reg [C_AXIS_TDATA_WIDTH-1:0] skid_data;
reg                          skid_valid;
reg                          skid_last;

always @(posedge clk) begin
    if (rst_sync) begin
        skid_valid   <= 1'b0;
        m_axis_tdata <= 'd0;
        m_axis_tvalid<= 1'b0;
        m_axis_tlast <= 1'b0;
    end else begin
        // Output handshake logic with full AXI-Stream compliance
        if (m_axis_tready || !m_axis_tvalid) begin
            if (skid_valid) begin
                m_axis_tdata  <= skid_data;
                m_axis_tvalid <= 1'b1;
                m_axis_tlast  <= skid_last;
                skid_valid    <= 1'b0;
            end else begin
                m_axis_tdata  <= {b_o, a_o};
                m_axis_tvalid <= core_valid_o;
                m_axis_tlast  <= core_last_o;
            end
        end else if (!skid_valid && core_valid_o) begin
            skid_data  <= {b_o, a_o};
            skid_valid <= 1'b1;
            skid_last  <= core_last_o;
        end
    end
end
```

### 5.2. Synchronous Reset Deassertion Synchronizer
Eliminate metastability and reset recovery failures:

```verilog
reg rst_sync_m, rst_sync;
always @(posedge clk or negedge aresetn) begin
    if (!aresetn) begin
        rst_sync_m <= 1'b1;
        rst_sync   <= 1'b1;
    end else begin
        rst_sync_m <= 1'b0;
        rst_sync   <= rst_sync_m;
    end
end
```

### 5.3. Frame Boundary Tracking & Error Reporting
1. Monitor `s_axis_tlast`: If `s_axis_tlast` is asserted before index 127 or not asserted at index 127, trigger a frame error.
2. Provide an AXI error status bit or interrupt (`axis_error`) to indicate framing or FIFO overflow errors.
3. Automatically flush internal FIFOs upon framing error detection to prevent cross-session contamination.

### 5.4. Active Memory Zeroization
Implement an active memory wipe state machine in [`FIFO.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/FIFO.v) that systematically writes zeros across `mem[0:DEPTH-1]` whenever a synchronous clear or reset command is received.

---

## 6. Summary of Required Modifications

| Priority | Component | Required Modification |
| :---: | :--- | :--- |
| **High** | [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v) | Remove `assign s_axis_tready = ~stall_i;`. Implement an independent input ready signal based on FIFO capacity. |
| **High** | [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v) | Insert an output skid buffer to guarantee `m_axis_tvalid` / `m_axis_tdata` stability during `m_axis_tready` deassertion. |
| **High** | [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v) | Replace combinational `~aresetn` with a dual-flip-flop reset synchronizer (`rst_sync`). |
| **Medium** | [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v) | Connect `s_axis_tlast`, add input word counter (0..127), and assert framing error on unexpected packet lengths. |
| **Medium** | [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v) | Wrap lines 21–24 (`$dumpfile` / `$dumpvars`) with `` `ifdef SIMULATION ``. |
| **Medium** | [`FIFO.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/FIFO.v) | Add zeroization write-pass upon reset to purge sensitive polynomial data from FPGA RAM blocks. |
| **Low** | [`NTT_engine_axis_wrapper.v`](file:///home/abhay/OpenSource/PQC_ASIC/RTL/NTT/NTT_engine_axis_wrapper.v) | Correct internal comments referring to `INTT_engine` to `NTT_engine`. |
