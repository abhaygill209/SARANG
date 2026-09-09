# ML-KEM (FIPS 203) — Pure-Python Reference Model

A clean, modular, self-contained Python implementation of ML-KEM
(CRYSTALS-Kyber, standardized as NIST FIPS 203), covering all three
parameter sets (ML-KEM-512, -768, -1024), plus:

- a **KAT verification harness** that validates the implementation bit-for-bit
  against real reference test vectors (not just internal self-consistency),
  and
- a **performance benchmarking harness** that profiles KeyGen/Encaps/Decaps
  across 1000 iterations per parameter set.

No third-party crypto libraries are used. SHA3-256/512 and SHAKE-128/256 come
from Python's standard-library `hashlib` (FIPS 202-compliant); everything
else (NTT, CBD sampling, rejection sampling, compression, K-PKE, the FO-style
transform) is implemented from scratch against the FIPS 203 pseudocode.

## Requirements

- Python 3.9+ (uses only the standard library: `hashlib`, `dataclasses`,
  `argparse`, `statistics`, `time`). No `pip install` needed.

## Project layout

```
mlkem_proj/
├── mlkem/
│   ├── __init__.py     # public API: MLKEM, ML_KEM_512/768/1024, ALL_PARAMS
│   ├── params.py        # parameter sets (k, eta1, eta2, du, dv) + derived lengths
│   ├── symmetric.py      # H, G, J, PRF, XOF wrappers around hashlib SHA3/SHAKE
│   ├── ntt.py           # forward/inverse NTT, NTT-domain polynomial multiply
│   ├── poly.py           # CBD sampling, SampleNTT rejection sampling,
│   │                     # Compress/Decompress, ByteEncode/ByteDecode
│   ├── indcpa.py         # K-PKE.KeyGen / Encrypt / Decrypt (IND-CPA core)
│   └── kem.py            # ML-KEM.KeyGen / Encaps / Decaps (FO transform,
│                          # implicit rejection) — the IND-CCA2 KEM
├── kat_test.py            # NIST/CCTV-lineage KAT verification harness
├── benchmark.py            # performance benchmarking harness
└── README.md
```

## Quick start

```bash
cd mlkem_proj
python3 -c "
from mlkem import MLKEM, ML_KEM_768

kem = MLKEM(ML_KEM_768)
ek, dk = kem.keygen()          # encapsulation key, decapsulation key
K, ct  = kem.encaps(ek)        # shared secret + ciphertext
K2     = kem.decaps(dk, ct)    # recovered shared secret
assert K == K2
print('shared secret (32 bytes):', K.hex())
"
```

Deterministic (derandomized) internal API, for test harnesses / KAT tooling:

```python
from mlkem import MLKEM, ML_KEM_512
kem = MLKEM(ML_KEM_512)
ek, dk = kem.keygen_internal(d, z)     # d, z: 32 bytes each
K, ct  = kem.encaps_internal(ek, m)     # m: 32 bytes
K2     = kem.decaps_internal(dk, ct)
```

## 1. Correctness: KAT verification harness (`kat_test.py`)

### Why this harness, and what it actually checks

Official NIST ACVP JSON vector files for FIPS 203 are large, and NIST's
CAVP/ACVP program tests via a client/server protocol rather than shipping
flat KAT files the way earlier PQC rounds did. Instead, this harness
reproduces the **"accumulated pq-crystals vectors"** published by the
C2SP/CCTV project (https://github.com/C2SP/CCTV/tree/main/ML-KEM), which are
derived directly from the pq-crystals/kyber reference implementation's own
`test_vectors.c` and are the standard lightweight way to KAT-test an ML-KEM
implementation without shipping hundreds of MB of vector files:

1. A single SHAKE-128 XOF, seeded with the empty string, is used as a
   deterministic RNG stream.
2. For each of N consecutive tests, `d`, `z`, `m` (32 bytes each) and a random
   (invalid) ciphertext `ct` are drawn from that stream, in order.
3. `KeyGen(d,z)` → `(ek,dk)`; `Encaps(ek,m)` → `(K,ct_valid)`;
   `Decaps(dk, ct_random)` → `K_bad`. The harness also asserts
   `Decaps(dk, ct_valid) == K` for every single test (a correctness check the
   published hash alone wouldn't catch).
4. `ek, dk, ct_valid, K, K_bad` are fed, in order, into a second running
   SHAKE-128 instance. After N tests, a 32-byte digest is taken.
5. Reference digests are published for N=10,000 and N=1,000,000; this
   harness ships the N=10,000 digests and checks against them automatically.

**This repository's implementation has been verified to reproduce these
reference digests bit-for-bit for all three parameter sets at N=10,000.**

### An important, documented spec subtlety

NIST added a **domain-separation byte** to `K-PKE.KeyGen` between the FIPS
203 initial public draft and the final published standard (August 2024),
specifically so the same seed `d` can't produce related keys across
ML-KEM-512/768/1024 (`(rho,sigma) = G(d || k)` instead of `G(d)`). The CCTV
vectors above predate that change. `MLKEM` defaults to
`domain_separated=True` (final-standard-compliant) everywhere; `kat_test.py`
passes `domain_separated=False` only when reproducing the CCTV vectors, and
says so in its own docstring. If your professor's course requires strict
final-FIPS-203 compliance (the normal case), the default `MLKEM(params)` is
what you want; the KAT harness's internal use of the legacy flag is purely to
match a specific external reference dataset, not the library's default
behavior.

### Running it

```bash
# Full verification against published reference digests (recommended):
python3 kat_test.py --count 10000

# A specific parameter set only:
python3 kat_test.py --count 10000 --params ML-KEM-768

# Quick smoke test (no reference digest exists for arbitrary counts, but this
# still exercises KeyGen/Encaps/Decaps end-to-end and self-checks correctness):
python3 kat_test.py --count 200
```

Expected output (abridged):
```
[PASS] ML-KEM-512:  10000 vectors in ~320s -> 845913ea5a308b803c764a9ed8e9d814ca1fd9c82ba43c7b1e64b79c7a6ec8e4
[PASS] ML-KEM-768:  10000 vectors in ~460s -> f7db260e1137a742e05fe0db9525012812b004d29040a5b606aad3d134b548d3
[PASS] ML-KEM-1024: 10000 vectors in ~620s -> 47ac888fe61544efc0518f46094b4f8a600965fc89822acb06dc7169d24f3543

ALL KAT CHECKS PASSED
```

The full run is pure-Python and CPU-bound (no C extensions), so 10,000
vectors per parameter set takes roughly 5–10 minutes depending on hardware.
If you need to split a long run across sessions (e.g. a constrained CI
runner), `kat_test.py` supports resumable chunking:

```bash
# Process tests [0,2500), [2500,5000), ... appending to kat_ML-KEM-512.bin:
python3 kat_test.py --params ML-KEM-512 --count 10000 --chunk 2500 --start 0
python3 kat_test.py --params ML-KEM-512 --count 10000 --chunk 2500 --start 2500
python3 kat_test.py --params ML-KEM-512 --count 10000 --chunk 2500 --start 5000
python3 kat_test.py --params ML-KEM-512 --count 10000 --chunk 2500 --start 7500
# Then hash the accumulated file and compare to the reference digest:
python3 kat_test.py --params ML-KEM-512 --count 10000 --finalize
```

### Using official ACVP JSON files instead

If you have official ACVP FIPS-203 vector files (from
https://github.com/usnistgov/ACVP-Server), `kat_test.load_acvp_json(path)`
provides a minimal loader/normalizer that groups test cases by function
(`keyGen` / `encapDecap`) and parameter set; wire its output into
`keygen_internal` / `encaps_internal` / `decaps_internal` for direct
byte-for-byte ek/dk/ct/K comparison against NIST's own values (use
`domain_separated=True`, the default, since official ACVP vectors target the
final standard).

## 2. Performance: benchmarking harness (`benchmark.py`)

Profiles KeyGen, Encaps, and Decaps across N iterations (default 1000) for
each parameter set, and prints mean time, standard deviation, and
throughput in an ASCII table. Encaps/Decaps are timed against a single fixed
keypair per parameter set, so the reported numbers isolate the cost of each
operation rather than conflating it with repeated KeyGen cost.

```bash
python3 benchmark.py                      # 1000 iterations, all 3 parameter sets
python3 benchmark.py --iterations 200     # faster run
python3 benchmark.py --params ML-KEM-1024 # single parameter set
```

Sample output (1000 iterations, this machine):

```
+----------------+-----------+-------------+-------------+--------------+
| Parameter Set  | Operation |   Mean Time |     Std Dev |      Ops/sec |
+----------------+-----------+-------------+-------------+--------------+
| ML-KEM-512     | KeyGen    |    3.551 ms |  299.501 us |        281.6 |
| ML-KEM-512     | Encaps    |    4.265 ms |  184.353 us |        234.5 |
| ML-KEM-512     | Decaps    |    6.707 ms |  734.983 us |        149.1 |
+----------------+-----------+-------------+-------------+--------------+
| ML-KEM-768     | KeyGen    |    5.716 ms |  771.449 us |        175.0 |
| ML-KEM-768     | Encaps    |    6.368 ms |  392.960 us |        157.0 |
| ML-KEM-768     | Decaps    |    9.664 ms |    1.160 ms |        103.5 |
+----------------+-----------+-------------+-------------+--------------+
| ML-KEM-1024    | KeyGen    |    7.985 ms |    1.123 ms |        125.2 |
| ML-KEM-1024    | Encaps    |    9.077 ms |  728.188 us |        110.2 |
| ML-KEM-1024    | Decaps   |   12.990 ms |  662.833 us |         77.0 |
+----------------+-----------+-------------+-------------+--------------+
```

(Numbers will vary by machine; this is a pure-Python model intended for
correctness benchmarking and relative-cost comparison across parameter sets,
not for reporting production-grade absolute performance — a C or RTL
implementation will be one to two orders of magnitude faster.)

## Implementation notes / known non-obvious spec details

These are the details that are easy to get subtly wrong and are worth
double-checking if you extend this code (e.g. for the SARANG hardware
project's Python golden-reference model):

- **NTT/INTT scaling factor is `128⁻¹ mod q`, not `256⁻¹ mod q`.** The
  Cooley-Tukey/Gentleman-Sande butterfly tree has 7 stages and operates on
  128 two-coefficient blocks (`Z_q[x]/(x^256+1)` splits into 128 degree-2
  factors) — it is a 128-point transform structurally, even though it acts
  on a 256-element array.
- **Matrix-generation XOF argument order is asymmetric between KeyGen and
  Encrypt**, and is easy to get backwards: per `pq-crystals/kyber/ref/indcpa.c`,
  KeyGen builds `A_hat[i][j] = SampleNTT(XOF(rho, j, i))` (`gen_a`, "not
  transposed") while Encrypt builds the transpose `A_hat[i][j] =
  SampleNTT(XOF(rho, i, j))` (`gen_at`, "transposed"). Getting this backwards
  still produces an internally self-consistent scheme (KeyGen/Encaps/Decaps
  round-trip correctly against each other!) but silently fails to
  interoperate with any other implementation — this is exactly the class of
  bug that only an external KAT catches, not internal round-trip testing.
- **Domain separation in `K-PKE.KeyGen`** (`G(d||k)` vs `G(d)`) is a
  final-standard-only addition; see the KAT section above.
- **Implicit rejection** in `ML-KEM.Decaps_internal` must not short-circuit
  the ciphertext comparison (e.g. never use a `strcmp`-style early-exit
  comparison in a hardware/C implementation) — this implementation uses
  Python's `!=` on `bytes`, which is fine for a reference/golden model but is
  *not* constant-time and should not be used as-is in a production or
  side-channel-sensitive context.
