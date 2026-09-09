"""
FIPS 202 primitive wrappers used by ML-KEM (FIPS 203, Section 4.1).

Python's hashlib already provides FIPS-202-compliant SHA3-256, SHA3-512,
SHAKE128 and SHAKE256, so we wrap those directly rather than re-implementing
Keccak-f[1600] in software (that work already exists as RTL in the SARANG
project this model is meant to validate against).
"""
import hashlib


def shake128(data: bytes, out_len: int) -> bytes:
    return hashlib.shake_128(data).digest(out_len)


def shake256(data: bytes, out_len: int) -> bytes:
    return hashlib.shake_256(data).digest(out_len)


def H(s: bytes) -> bytes:
    """SHA3-256, 32-byte output."""
    return hashlib.sha3_256(s).digest()


def G(s: bytes):
    """SHA3-512, split into two 32-byte halves (a, b)."""
    d = hashlib.sha3_512(s).digest()
    return d[:32], d[32:]


def J(s: bytes) -> bytes:
    """SHAKE256 truncated to 32 bytes; used for implicit rejection."""
    return shake256(s, 32)


def PRF(eta: int, s: bytes, b: int) -> bytes:
    """PRF_eta(s, b) = SHAKE256(s || b), truncated to 64*eta bytes."""
    return shake256(s + bytes([b]), 64 * eta)


class XOF:
    """Incremental SHAKE128-based XOF used for matrix expansion (rejection sampling)."""

    def __init__(self, rho: bytes, i: int, j: int):
        self._ctx = hashlib.shake_128(rho + bytes([i, j]))

    def read(self, n: int) -> bytes:
        return self._ctx.digest(n)
