"""
Number-Theoretic Transform for ML-KEM (FIPS 203, Section 4.3, Algorithms 9-12).

q = 3329, n = 256, zeta = 17 is a primitive 256th root of unity mod q.
"""
from .params import Q, N

ZETA = 17


def _bit_rev7(x: int) -> int:
    r = 0
    for _ in range(7):
        r = (r << 1) | (x & 1)
        x >>= 1
    return r


# zetas[k] = zeta^(BitRev7(k)) mod q, k = 0..127 (index 0 unused by NTT/INTT loops)
ZETAS = [pow(ZETA, _bit_rev7(k), Q) for k in range(128)]

# gammas[i] = zeta^(2*BitRev7(i)+1) mod q, used in base-case multiplication
GAMMAS = [pow(ZETA, 2 * _bit_rev7(i) + 1, Q) for i in range(128)]

NINV = pow(128, Q - 2, Q)  # 128^{-1} mod q (= 3303); the CT/GS butterfly tree
                            # has 7 stages (log2(128)), operating on 128 pairs


def ntt(f):
    """Algorithm 9: in-place-style forward NTT. f: list[256] -> list[256]."""
    f = list(f)
    k = 1
    length = 128
    while length >= 2:
        start = 0
        while start < N:
            zeta = ZETAS[k]
            k += 1
            for j in range(start, start + length):
                t = (zeta * f[j + length]) % Q
                f[j + length] = (f[j] - t) % Q
                f[j] = (f[j] + t) % Q
            start += 2 * length
        length //= 2
    return f


def intt(f):
    """Algorithm 10: inverse NTT."""
    f = list(f)
    k = 127
    length = 2
    while length <= 128:
        start = 0
        while start < N:
            zeta = ZETAS[k]
            k -= 1
            for j in range(start, start + length):
                t = f[j]
                f[j] = (t + f[j + length]) % Q
                f[j + length] = (zeta * (f[j + length] - t)) % Q
            start += 2 * length
        length *= 2
    return [(x * NINV) % Q for x in f]


def _base_case_multiply(a0, a1, b0, b1, gamma):
    c0 = (a0 * b0 + a1 * b1 * gamma) % Q
    c1 = (a0 * b1 + a1 * b0) % Q
    return c0, c1


def multiply_ntts(f, g):
    """Algorithm 11/12: multiplication of two NTT-domain polynomials."""
    h = [0] * N
    for i in range(128):
        c0, c1 = _base_case_multiply(f[2 * i], f[2 * i + 1], g[2 * i], g[2 * i + 1], GAMMAS[i])
        h[2 * i] = c0
        h[2 * i + 1] = c1
    return h


def poly_add(a, b):
    return [(x + y) % Q for x, y in zip(a, b)]


def poly_sub(a, b):
    return [(x - y) % Q for x, y in zip(a, b)]
