"""
ML-KEM top-level API (FIPS 203, Algorithms 16-21).

Wraps K-PKE with the implicit-rejection FO-style transform to get an
IND-CCA2-secure KEM. Internal (*_internal) functions take explicit
deterministic randomness so they can be driven directly by KAT vectors;
the public KeyGen/Encaps draw fresh randomness via os.urandom.
"""
import os
from .params import MLKEMParams
from .symmetric import G, H, J
from . import indcpa


class MLKEM:
    def __init__(self, params: MLKEMParams, domain_separated: bool = True):
        self.params = params
        # See indcpa.keygen docstring: True = final FIPS 203 (default, spec-compliant).
        # False reproduces pre-final/draft-lineage vectors (e.g. CCTV accumulated vectors).
        self.domain_separated = domain_separated

    # ---- internal, deterministic-randomness variants (used by KAT harness) ----

    def keygen_internal(self, d: bytes, z: bytes):
        p = self.params
        ek_pke, dk_pke = indcpa.keygen(d, p, domain_separated=self.domain_separated)
        ek = ek_pke
        dk = dk_pke + ek + H(ek) + z
        return ek, dk

    def encaps_internal(self, ek: bytes, m: bytes):
        p = self.params
        K, r = G(m + H(ek))
        c = indcpa.encrypt(ek, m, r, p)
        return K, c

    def decaps_internal(self, dk: bytes, c: bytes) -> bytes:
        p = self.params
        k = p.k
        dk_pke = dk[:384 * k]
        ek_pke = dk[384 * k:384 * k + p.ek_pke_len]
        h = dk[384 * k + p.ek_pke_len: 384 * k + p.ek_pke_len + 32]
        z = dk[384 * k + p.ek_pke_len + 32: 384 * k + p.ek_pke_len + 64]

        m_prime = indcpa.decrypt(dk_pke, c, p)
        K_prime, r_prime = G(m_prime + h)
        K_bar = J(z + c)
        c_prime = indcpa.encrypt(ek_pke, m_prime, r_prime, p)

        if c != c_prime:  # implicit rejection
            K_prime = K_bar
        return K_prime

    # ---- public, randomized API ----

    def keygen(self):
        d = os.urandom(32)
        z = os.urandom(32)
        return self.keygen_internal(d, z)

    def encaps(self, ek: bytes):
        m = os.urandom(32)
        return self.encaps_internal(ek, m)

    def decaps(self, dk: bytes, c: bytes) -> bytes:
        return self.decaps_internal(dk, c)
