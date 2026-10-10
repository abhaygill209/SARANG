import numpy as np

def iterative_ntt_dif(a, q, W):
    n = len(a)
    a = np.array(a, dtype=np.int64).copy()

    stage = 0
    length = n

    while length >= 2:
        half = length // 2
        wlen = pow(W, n // length, q)

        # -----------------------------------------
        # Print twiddle factors ONCE for this stage
        # -----------------------------------------
        twiddles = []
        w = 1

        for _ in range(half):
            twiddles.append(w)
            w = (w * wlen) % q

        print(f"\nStage {stage}")
        print("Length:", length)
        print("wlen:", wlen)
        print("Twiddle factors:", twiddles)

        # -----------------------------------------
        # DIF butterflies
        # -----------------------------------------
        for start in range(0, n, length):
            w = 1

            for j in range(start, start + half):
                u = a[j]
                v = a[j + half]

                a[j] = (u + v) % q
                a[j + half] = ((u - v) * w) % q

                w = (w * wlen) % q

        length //= 2
        stage += 1

    return a


def iterative_intt_dit(a, q, W):
    n = len(a)
    a = np.array(a, dtype=np.int64).copy()

    W_inv = pow(W, -1, q)

    length = 2
    stage = 0

    while length <= n:
        half = length // 2

        # Twiddle factor for this stage
        wlen = pow(W_inv, n // length, q)

        # Print each twiddle factor once
        twiddles = []
        w = 1

        for _ in range(half):
            twiddles.append(w)
            w = (w * wlen) % q

        print(f"\nStage {stage}")
        print("Length:", length)
        print("wlen:", wlen)
        print("Twiddle factors:", twiddles)

        # DIT inverse butterflies
        for start in range(0, n, length):
            w = 1

            for j in range(start, start + half):
                u = a[j]
                v = (w * a[j + half]) % q

                a[j] = (u + v) % q
                a[j + half] = (u - v) % q

                w = (w * wlen) % q

        length *= 2
        stage += 1

    # Scale by 1/N
    n_inv = pow(n, -1, q)
    a = (a * n_inv) % q

    return a

N = 256 # number of points in the NTT
q = 7681 # prime modulus
W = 3844 # primitive root of unity for NTT modulo q
MB = 1*8*(2**10) # Number of random bits for total dataset generation
BLOCK_SIZE = 128 # Size of each block for partitioned convolution

a = np.random.randint(0, q, N)
a_cap = iterative_ntt_dif(a, q, W)
a_cap = iterative_intt_dit(a_cap, q, W)

assert np.array_equal(a, a_cap), "NTT and inverse NTT did not recover the original polynomial."




