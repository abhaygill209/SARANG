"""
Polynomial-level helpers: CBD sampling (Alg 8), rejection sampling for
uniform NTT elements (Alg 7), Compress/Decompress (Section 4.2.1), and
ByteEncode/ByteDecode (Alg 5/6).
"""
from .params import Q, N
from .symmetric import XOF


def _bytes_to_bits(data: bytes):
    bits = []
    for byte in data:
        for i in range(8):
            bits.append((byte >> i) & 1)
    return bits


def sample_cbd(eta: int, data: bytes):
    """Algorithm 8: SamplePolyCBD_eta. data must be 64*eta bytes."""
    bits = _bytes_to_bits(data)
    f = [0] * N
    for i in range(N):
        base = 2 * i * eta
        x = sum(bits[base + j] for j in range(eta))
        y = sum(bits[base + eta + j] for j in range(eta))
        f[i] = (x - y) % Q
    return f


def sample_ntt(rho: bytes, i: int, j: int):
    """Algorithm 7: SampleNTT via rejection sampling over an XOF stream."""
    xof = XOF(rho, i, j)
    coeffs = []
    buflen = 504  # 168 bytes (one SHAKE128 rate block) * 3, plenty for ~256 samples
    while True:
        buf = xof.read(buflen)
        coeffs = []
        pos = 0
        n = len(buf)
        while pos + 3 <= n and len(coeffs) < N:
            b0, b1, b2 = buf[pos], buf[pos + 1], buf[pos + 2]
            d1 = b0 | ((b1 & 0x0F) << 8)
            d2 = (b1 >> 4) | (b2 << 4)
            if d1 < Q:
                coeffs.append(d1)
            if len(coeffs) < N and d2 < Q:
                coeffs.append(d2)
            pos += 3
        if len(coeffs) >= N:
            return coeffs[:N]
        buflen *= 2


def compress(vals, d: int):
    two_d = 1 << d
    return [((v * two_d + Q // 2) // Q) % two_d for v in vals]


def decompress(vals, d: int):
    two_d = 1 << d
    half = 1 << (d - 1)
    return [((v * Q + half) >> d) for v in vals]


def byte_encode(vals, d: int) -> bytes:
    """Algorithm 5: ByteEncode_d. Packs len(vals) d-bit ints, LSB-first."""
    nbits = len(vals) * d
    out = bytearray((nbits + 7) // 8)
    bit_idx = 0
    for v in vals:
        for b in range(d):
            if (v >> b) & 1:
                out[bit_idx >> 3] |= 1 << (bit_idx & 7)
            bit_idx += 1
    return bytes(out)


def byte_decode(data: bytes, d: int, n: int = N, reduce_mod_q: bool = False):
    """Algorithm 6: ByteDecode_d."""
    bits = _bytes_to_bits(data)
    vals = []
    for i in range(n):
        v = 0
        base = i * d
        for b in range(d):
            v |= bits[base + b] << b
        vals.append(v % Q if reduce_mod_q else v)
    return vals
