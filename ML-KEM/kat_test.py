"""
NIST/ACVP-lineage Known-Answer-Test harness for ML-KEM.

This validates the implementation against the "accumulated pq-crystals
vectors" published by the C2SP/CCTV project
(https://github.com/C2SP/CCTV/tree/main/ML-KEM), which are derived directly
from the pq-crystals/kyber reference implementation's `test_vectors.c` and
are the standard way to KAT-test an ML-KEM implementation without shipping
hundreds of MB of vector files.

Procedure (verbatim from the CCTV README):
  A single SHAKE-128 XOF, seeded with the empty string, is used as a
  deterministic RNG stream. For each of N consecutive tests, the following
  are drawn from the stream in order:
      d   (32 bytes)  -- KeyGen randomness
      z   (32 bytes)  -- KeyGen implicit-rejection randomness
      m   (32 bytes)  -- Encaps randomness
      ct  (ct_len bytes) -- an *invalid* ciphertext fed to Decaps

  For each test: ek,dk = KeyGen(d,z); K,ct_v = Encaps(ek,m);
  K_bad = Decaps(dk, ct_random). The values ek, dk, ct_v, K, K_bad are fed,
  in that order, into a second running SHAKE-128 instance. After N tests,
  a 32-byte digest is taken; published reference digests exist for N=10000
  and N=1000000.

This also acts as a from-scratch replacement for a downloaded NIST ACVP
.json/.rsp file: if you have an official ACVP file locally, `load_acvp_json`
below shows how to plug it into the same keygen_internal/encaps_internal/
decaps_internal API for bit-for-bit ek/dk/ct/K comparison.
"""
import argparse
import hashlib
import json
import time

from mlkem import MLKEM, ML_KEM_512, ML_KEM_768, ML_KEM_1024

# Published running-SHAKE128 digests from
# https://github.com/C2SP/CCTV/blob/main/ML-KEM/README.md
EXPECTED_HASHES = {
    10_000: {
        "ML-KEM-512": "845913ea5a308b803c764a9ed8e9d814ca1fd9c82ba43c7b1e64b79c7a6ec8e4",
        "ML-KEM-768": "f7db260e1137a742e05fe0db9525012812b004d29040a5b606aad3d134b548d3",
        "ML-KEM-1024": "47ac888fe61544efc0518f46094b4f8a600965fc89822acb06dc7169d24f3543",
    },
    1_000_000: {
        "ML-KEM-512": "578eeaa1156848cbf7a15bafef963b4ccabe3308ddfb7dbdd20ad965f634e81d",
        "ML-KEM-768": "70090cc5842aad0ec43d5042c783fae9bc320c047b5dafcb6e134821db02384d",
        "ML-KEM-1024": "7ccc6d803739d3db3c5ce39c7130f459db32a199c6605e3be210e5a89d4c4b95",
    },
}


class ShakeStream:
    """Deterministic byte stream from SHAKE-128(""), read incrementally."""

    def __init__(self):
        self._ctx = hashlib.shake_128(b"")
        self._pos = 0

    def read(self, n: int) -> bytes:
        end = self._pos + n
        buf = self._ctx.digest(end)
        out = buf[self._pos:end]
        self._pos = end
        return out


PARAM_MAP = {"ML-KEM-512": ML_KEM_512, "ML-KEM-768": ML_KEM_768, "ML-KEM-1024": ML_KEM_1024}


def _rng_values_for_test(i: int, ct_len: int):
    """Stateless: returns (d,z,m,ct_random) for test index i by directly slicing
    the SHAKE-128("") stream at the right offset. This makes each test
    independently (re)computable, which is what makes chunked/resumable
    execution below possible without persisting any hasher state to disk."""
    rec_len = 32 + 32 + 32 + ct_len
    start = i * rec_len
    end = start + rec_len
    buf = hashlib.shake_128(b"").digest(end)[start:end]
    return buf[0:32], buf[32:64], buf[64:96], buf[96:96 + ct_len]


def run_chunk(param_name: str, start: int, end: int, outfile: str, verbose: bool = False):
    """Runs tests [start, end) and *appends* their ek/dk/ct/K/Kbad bytes to
    `outfile`. Safe to call repeatedly across separate process invocations
    with increasing (start,end) ranges to build up a long KAT run in pieces;
    finalize_hash() then hashes the accumulated file in one pass."""
    params = PARAM_MAP[param_name]
    # The CCTV "accumulated pq-crystals vectors" this harness reproduces predate
    # the domain-separation byte NIST added to K-PKE.KeyGen for the *final*
    # FIPS 203 (see mlkem/indcpa.py docstring), so we disable it here to match
    # them bit-for-bit. The shipped MLKEM default (domain_separated=True) is the
    # spec-compliant final-standard behavior used everywhere else in this repo.
    kem = MLKEM(params, domain_separated=False)

    with open(outfile, "ab") as f:
        for i in range(start, end):
            d, z, m, ct_random = _rng_values_for_test(i, params.ct_len)

            ek, dk = kem.keygen_internal(d, z)
            K, ct_valid = kem.encaps_internal(ek, m)

            if kem.decaps_internal(dk, ct_valid) != K:
                raise AssertionError(f"[{param_name}] test {i}: valid ciphertext failed to decapsulate")

            K_bad = kem.decaps_internal(dk, ct_random)

            f.write(ek)
            f.write(dk)
            f.write(ct_valid)
            f.write(K)
            f.write(K_bad)

            if verbose and (i + 1) % 500 == 0:
                print(f"  [{param_name}] {i + 1}/{end} tests completed")


def finalize_hash(outfile: str) -> str:
    ctx = hashlib.shake_128()
    with open(outfile, "rb") as f:
        while True:
            chunk = f.read(1 << 20)
            if not chunk:
                break
            ctx.update(chunk)
    return ctx.digest(32).hex()


def run_accumulated_kat(param_name: str, count: int, verbose: bool = False) -> str:
    """Single-shot (non-chunked) convenience wrapper for small `count`."""
    import tempfile, os as _os
    fd, path = tempfile.mkstemp()
    _os.close(fd)
    try:
        run_chunk(param_name, 0, count, path, verbose=verbose)
        return finalize_hash(path)
    finally:
        _os.remove(path)


def load_acvp_json(path: str):
    """
    Minimal loader/normalizer for official ACVP FIPS-203 JSON vector files
    (as distributed by https://github.com/usnistgov/ACVP-Server), for users
    who have downloaded the official files. Supports the 'AFT' (KeyGen) and
    'AFT'/'VAL' (encapDecap) test groups. Returns a list of normalized dicts.
    """
    with open(path) as f:
        data = json.load(f)
    cases = []
    for group in data.get("testGroups", []):
        function = group.get("function") or group.get("testType")
        param_set = group.get("parameterSet")
        for case in group.get("tests", []):
            cases.append({
                "function": function,
                "parameterSet": param_set,
                **case,
            })
    return cases


def main():
    ap = argparse.ArgumentParser(description="ML-KEM KAT verification harness")
    ap.add_argument("--count", type=int, default=10_000,
                     help="total number of deterministic test vectors (10000 or 1000000 "
                          "have published reference digests to auto-verify against)")
    ap.add_argument("--params", nargs="+", default=["ML-KEM-512", "ML-KEM-768", "ML-KEM-1024"])
    ap.add_argument("--chunk", type=int, default=None,
                     help="run only tests [start,start+chunk) and append to --outfile, "
                          "then exit (for splitting a long run across multiple invocations)")
    ap.add_argument("--start", type=int, default=0)
    ap.add_argument("--outfile", type=str, default=None,
                     help="accumulator file for chunked runs (default: kat_<param>.bin)")
    ap.add_argument("--finalize", action="store_true",
                     help="just hash an existing --outfile and compare to the reference digest")
    args = ap.parse_args()

    expected = EXPECTED_HASHES.get(args.count)

    if args.chunk is not None or args.finalize:
        # chunked / resumable mode: process one parameter set per invocation
        name = args.params[0]
        outfile = args.outfile or f"kat_{name}.bin"
        if args.finalize:
            digest = finalize_hash(outfile)
            if expected is not None:
                ok = digest == expected[name]
                print(f"[{'PASS' if ok else 'FAIL'}] {name}: {args.count} vectors -> {digest}")
                raise SystemExit(0 if ok else 1)
            print(f"[INFO] {name}: {digest}")
            return
        end = min(args.start + args.chunk, args.count)
        t0 = time.perf_counter()
        run_chunk(name, args.start, end, outfile, verbose=True)
        dt = time.perf_counter() - t0
        print(f"[{name}] wrote tests [{args.start},{end}) in {dt:.1f}s -> {outfile}")
        return

    # single-shot mode
    all_ok = True
    for name in args.params:
        t0 = time.perf_counter()
        digest = run_accumulated_kat(name, args.count)
        dt = time.perf_counter() - t0
        if expected is not None:
            ok = digest == expected[name]
            all_ok &= ok
            status = "PASS" if ok else "FAIL"
            print(f"[{status}] {name}: {args.count} vectors in {dt:.1f}s -> {digest}")
            if not ok:
                print(f"         expected -> {expected[name]}")
        else:
            print(f"[INFO] {name}: {args.count} vectors in {dt:.1f}s -> {digest} "
                  f"(no reference digest published for this count; use 10000 or 1000000 to auto-verify)")

    if expected is not None:
        print("\nALL KAT CHECKS PASSED" if all_ok else "\nKAT VERIFICATION FAILED")
        raise SystemExit(0 if all_ok else 1)


if __name__ == "__main__":
    main()
