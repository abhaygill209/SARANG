import numpy as np
import csv
import argparse
from pathlib import Path


def generate_input(n, q, seed):
    rng = np.random.RandomState(seed)
    #return rng.randint(0, q, size=n, dtype=np.int64)
    return np.linspace(0, 256, num=n, dtype=np.int64) % q  # Example input for testing


def bit_reverse_copy(a):
    n = len(a)
    if n == 0 or n & (n - 1):
        raise ValueError("The input length must be a positive power of two")

    result = np.zeros(n, dtype=np.int64)

    j = 0

    for i in range(n):
        result[j] = a[i]

        bit = n >> 1

        while j & bit:
            j ^= bit
            bit >>= 1

        j ^= bit

    return result


def iterative_ntt(a, q, W):
    n = len(a)

    # Step 1: bit-reverse the input
    a = bit_reverse_copy(a)

    # Step wise NTT solution
    stage_count = n.bit_length()
    b = np.zeros((stage_count, n), dtype=np.int64)
    b[0] = a.copy()
    # Step 2: iterative NTT
    length = 2
    stage_index = 1

    while length <= n:

        # Root used at this stage
        wlen = pow(W, n // length, q)

        # Process every block of this size
        for start in range(0, n, length):

            w = 1

            # Butterfly operations
            for j in range(start, start + length // 2):

                u = a[j]
                v = (w * a[j + length // 2]) % q

                a[j] = (u + v) % q
                a[j + length // 2] = (u - v) % q

                w = (w * wlen) % q

        length *= 2
        # storing the stage value 
        b[stage_index] = a.copy()
        stage_index += 1

    return a, b


def main():
    parser = argparse.ArgumentParser(description="Run a parameterized iterative NTT")
    parser.add_argument("--n", type=int, default=256, help="Transform length (power of two)")
    parser.add_argument("--q", type=int, default=3329, help="Modulus")
    parser.add_argument("--root", type=int, default=17, help="Primitive N-th root of unity")
    parser.add_argument("--seed", type=int, default=42, help="Random input seed")
    parser.add_argument(
        "--output",
        type=Path,
        default=Path("stage_values.csv"),
        help="CSV file for stage values",
    )
    args = parser.parse_args()

    input_values = generate_input(args.n, args.q, args.seed)
    output, stage_values = iterative_ntt(input_values, args.q, args.root)

    print("Input:")
    print(input_values)

    print("\nOutput:")
    print(output)

    print(f"\nStage values stored in {args.output}")
    with args.output.open("w", newline="") as f:
        writer = csv.writer(f)
        writer.writerows(stage_values)


if __name__ == "__main__":
    main()