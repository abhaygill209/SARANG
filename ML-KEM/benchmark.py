"""
Performance benchmarking harness for ML-KEM-512/768/1024.

Profiles KeyGen, Encaps, and Decaps over N iterations per parameter set and
reports mean execution time, standard deviation, and throughput (ops/sec) in
a formatted ASCII table.

Usage:
    python3 benchmark.py                     # default: 1000 iterations, all 3 params
    python3 benchmark.py --iterations 200    # quicker smoke run
    python3 benchmark.py --params ML-KEM-768
"""
import argparse
import statistics
import time

from mlkem import MLKEM, ML_KEM_512, ML_KEM_768, ML_KEM_1024

PARAM_MAP = {"ML-KEM-512": ML_KEM_512, "ML-KEM-768": ML_KEM_768, "ML-KEM-1024": ML_KEM_1024}


def _time_op(fn, n: int):
    """Runs fn() n times, returning a list of per-call wall-clock times in seconds."""
    times = []
    for _ in range(n):
        t0 = time.perf_counter()
        fn()
        t1 = time.perf_counter()
        times.append(t1 - t0)
    return times


def benchmark_param_set(name: str, iterations: int, verbose: bool = False):
    """Returns a dict: {'KeyGen': [times], 'Encaps': [times], 'Decaps': [times]}."""
    params = PARAM_MAP[name]
    kem = MLKEM(params)

    # KeyGen ---------------------------------------------------------------
    keygen_times = _time_op(kem.keygen, iterations)

    # Fix a single keypair for Encaps/Decaps timing so we isolate the cost of
    # those operations rather than re-measuring KeyGen inside the loop.
    ek, dk = kem.keygen()

    encaps_times = []
    ciphertexts = []
    for _ in range(iterations):
        t0 = time.perf_counter()
        K, c = kem.encaps(ek)
        t1 = time.perf_counter()
        encaps_times.append(t1 - t0)
        ciphertexts.append(c)

    decaps_times = []
    for c in ciphertexts:
        t0 = time.perf_counter()
        kem.decaps(dk, c)
        t1 = time.perf_counter()
        decaps_times.append(t1 - t0)

    if verbose:
        print(f"  {name}: finished {iterations} iterations of KeyGen/Encaps/Decaps")

    return {"KeyGen": keygen_times, "Encaps": encaps_times, "Decaps": decaps_times}


def _fmt_time(seconds: float) -> str:
    """Auto-scale to ms or us for readability."""
    ms = seconds * 1e3
    if ms >= 1.0:
        return f"{ms:8.3f} ms"
    return f"{ms * 1e3:8.3f} us"


def print_report(results: dict):
    """results: {param_name: {op_name: [times_in_seconds]}}"""
    col_op = "Operation"
    col_mean = "Mean Time"
    col_std = "Std Dev"
    col_ops = "Ops/sec"

    header = f"| {'Parameter Set':<14} | {col_op:<9} | {col_mean:>11} | {col_std:>11} | {col_ops:>12} |"
    sep = "+" + "-" * (len(header) - 2) + "+"
    # rebuild sep to match column widths exactly
    sep = "+" + "-" * 16 + "+" + "-" * 11 + "+" + "-" * 13 + "+" + "-" * 13 + "+" + "-" * 14 + "+"

    print(sep)
    print(f"| {'Parameter Set':<14} | {col_op:<9} | {col_mean:>11} | {col_std:>11} | {col_ops:>12} |")
    print(sep)

    for param_name, ops in results.items():
        for op_name, times in ops.items():
            mean_t = statistics.mean(times)
            std_t = statistics.stdev(times) if len(times) > 1 else 0.0
            ops_per_sec = 1.0 / mean_t if mean_t > 0 else float("inf")
            print(f"| {param_name:<14} | {op_name:<9} | {_fmt_time(mean_t):>11} | "
                  f"{_fmt_time(std_t):>11} | {ops_per_sec:>12,.1f} |")
        print(sep)


def main():
    ap = argparse.ArgumentParser(description="ML-KEM performance benchmark harness")
    ap.add_argument("--iterations", type=int, default=1000)
    ap.add_argument("--params", nargs="+", default=["ML-KEM-512", "ML-KEM-768", "ML-KEM-1024"])
    args = ap.parse_args()

    results = {}
    for name in args.params:
        print(f"Benchmarking {name} ({args.iterations} iterations)...")
        results[name] = benchmark_param_set(name, args.iterations, verbose=True)

    print()
    print_report(results)


if __name__ == "__main__":
    main()
