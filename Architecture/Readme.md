Process of production:

Reference behaviour code -> RTL code -> Verification -> PDE 

  # Python Cycle-Accurate NTT Engine Emulator

  ## Summary

  Build a parameterized Python emulator matching the
  repository’s RTL structure:

  input pair → pipelined Montgomery butterfly → two-FIFO
  delay/buffer → next butterfly

  The core API will be clock-based, while a stream helper
  will support normal verification and algorithm
  experiments.

  ## Key Changes

  - Create a Python emulator package containing:
      - NTTConfig: N, modulus, data width, Montgomery
        parameters, stage count, FIFO depths, and primitive
        root.

      - Montgomery arithmetic helpers matching
        ButterflyUnitCT.v.

      - ButterflyUnitCT: four-cycle pipeline with valid,
        stall, reset, modular add/subtract, and Montgomery
        multiplication.

      - DelayUnit: two-FIFO model matching DU_FIFO.v,
        including simultaneous read/write and occupancy
        behavior.

      - TwiddleROM: synchronous ROM model with generated or
        loaded stage values.

      - NTTEngine: connects butterfly and delay stages and
        advances all components on one clock edge.

      - Trace records containing cycle number, valid
        signals, input/output pairs, twiddle values, FIFO
        state, and butterfly pipeline state.

  - Expose a cycle-step interface:

    result = engine.step(
        valid_i=True,
        a_i=a_mont,
        b_i=b_mont,
        stall_i=False,
    )

    The result should include valid_o, a_o, and b_o, with
    optional internal trace data.

  - Provide a stream-level helper that accepts:
      - packed or unpacked input pairs,
      - arbitrary valid patterns,
      - arbitrary stall patterns,
      - reset intervals,
      - Montgomery or normal-domain input/output
        conversion.

  - Generate twiddle factors from the configured primitive
    root, while also supporting the existing .mem files for
    exact RTL comparison.

  - Model the current RTL’s synchronous behavior
    explicitly:
      - all state updates occur together on a clock edge;
      - stall freezes pipelined butterfly and ROM state;
      - FIFO read data appears with the same registered
        timing as the RTL;

      - valid signals propagate independently of data;
      - stage-specific twiddle ROM addresses advance
        according to the RTL schedule.

  - Support both:
      - hardware-faithful Montgomery values internally;
      - normal-domain conversion at the public API
        boundary.

  ## Test Plan

  - Unit-test Montgomery multiplication against direct
    modular multiplication.

  - Verify butterfly add/subtract results and four-cycle
    latency.

  - Verify FIFO ordering, empty behavior, occupancy,
    simultaneous read/write, reset, and stall behavior.

  - Verify twiddle ROM contents against the existing .mem
    files.

  - Test small parameterized sizes such as N=8 and N=16.
  - Test the current RTL configuration with N=256, q=3329,
    and 16-bit Montgomery arithmetic.

  - Apply randomized valid_i and stall_i patterns.
  - Compare cycle-by-cycle outputs and selected internal
    traces against Verilog/cocotb simulation.

  - Separately compare the final output vector against an
    independent mathematical NTT reference.

  - Add regression tests for reset between frames and
    repeated identical frames.

  ## Assumptions

  - The first implementation reproduces the current RTL
    behavior, including its timing and FIFO semantics,
    rather than silently correcting RTL behavior.

  - Inputs and outputs are processed as (a,b) pairs,
    matching the packed hardware interface.

  - The cycle-step API is the authoritative model; the
    stream API is built on top of it.

  - The emulator will initially target forward NTT
    operation. INTT support can reuse the architecture with
    inverse twiddle ROMs and the corresponding Gentleman–
    Sande butterfly later.

  - Any mismatch between mathematical NTT behavior and
    current RTL behavior will be reported explicitly by
    tests instead of hidden inside the emulator.