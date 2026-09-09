"""
FIPS 203 (ML-KEM) parameter sets.

n, q are fixed by the standard. k, eta1, eta2, du, dv vary per parameter set.
"""
from dataclasses import dataclass

Q = 3329
N = 256


@dataclass(frozen=True)
class MLKEMParams:
    name: str
    k: int
    eta1: int
    eta2: int
    du: int
    dv: int

    @property
    def ek_pke_len(self) -> int:
        return 384 * self.k + 32

    @property
    def dk_pke_len(self) -> int:
        return 384 * self.k

    @property
    def ek_len(self) -> int:
        return self.ek_pke_len

    @property
    def dk_len(self) -> int:
        # dkPKE || ekPKE || H(ek) || z
        return 384 * self.k + self.ek_pke_len + 32 + 32

    @property
    def ct_len(self) -> int:
        return 32 * self.du * self.k + 32 * self.dv


ML_KEM_512 = MLKEMParams(name="ML-KEM-512", k=2, eta1=3, eta2=2, du=10, dv=4)
ML_KEM_768 = MLKEMParams(name="ML-KEM-768", k=3, eta1=2, eta2=2, du=10, dv=4)
ML_KEM_1024 = MLKEMParams(name="ML-KEM-1024", k=4, eta1=2, eta2=2, du=11, dv=5)

ALL_PARAMS = {
    "ML-KEM-512": ML_KEM_512,
    "ML-KEM-768": ML_KEM_768,
    "ML-KEM-1024": ML_KEM_1024,
}
