"""
K-PKE: the underlying IND-CPA-secure public-key encryption scheme
(FIPS 203, Algorithms 13, 14, 15). ML-KEM wraps this with a
Fujisaki-Okamoto-style transform (see kem.py) to obtain IND-CCA2 KEM security.
"""
from .params import MLKEMParams, Q, N
from .symmetric import G, PRF
from .ntt import ntt, intt, multiply_ntts, poly_add, poly_sub
from .poly import sample_cbd, sample_ntt, compress, decompress, byte_encode, byte_decode


def _generate_matrix(rho: bytes, k: int, transpose: bool):
    """A_hat[i][j] = SampleNTT(XOF(rho, i, j)) when transpose=True (used for
    A^T in Encrypt), or SampleNTT(XOF(rho, j, i)) when transpose=False (used
    for A in KeyGen) -- matching pq-crystals/kyber ref/indcpa.c gen_matrix
    (gen_a = gen_matrix(...,0) uses xof_absorb(seed,j,i); gen_at = gen_matrix(...,1)
    uses xof_absorb(seed,i,j))."""
    A = [[None] * k for _ in range(k)]
    for i in range(k):
        for j in range(k):
            if transpose:
                A[i][j] = sample_ntt(rho, i, j)
            else:
                A[i][j] = sample_ntt(rho, j, i)
    return A


def _matrix_vector_mul(A, vec_hat, k):
    out = []
    for i in range(k):
        acc = [0] * N
        for j in range(k):
            acc = poly_add(acc, multiply_ntts(A[i][j], vec_hat[j]))
        out.append(acc)
    return out


def _dot(vec1_hat, vec2_hat, k):
    acc = [0] * N
    for j in range(k):
        acc = poly_add(acc, multiply_ntts(vec1_hat[j], vec2_hat[j]))
    return acc


def keygen(d: bytes, params: MLKEMParams, domain_separated: bool = True):
    """Algorithm 13: K-PKE.KeyGen. Returns (ekPKE, dkPKE).

    `domain_separated` controls whether the parameter-set byte `k` is mixed
    into the G() call: (rho, sigma) = G(d || k). This byte was added between
    the FIPS 203 initial public draft and the final published standard
    (August 2024) specifically to stop the same seed `d` from producing
    related keys across ML-KEM-512/768/1024 ("domain separation added to
    K-PKE.KeyGen" per the NIST Federal Register notice). Final-standard
    implementations must use domain_separated=True (the default). Sets it to
    False only to reproduce pre-final / draft-lineage test vectors such as
    the CCTV "accumulated pq-crystals vectors" (see kat_test.py)."""
    k = params.k
    rho, sigma = G(d + bytes([k])) if domain_separated else G(d)
    A_hat = _generate_matrix(rho, k, transpose=False)

    N_ctr = 0
    s = []
    for _ in range(k):
        s.append(sample_cbd(params.eta1, PRF(params.eta1, sigma, N_ctr)))
        N_ctr += 1
    e = []
    for _ in range(k):
        e.append(sample_cbd(params.eta1, PRF(params.eta1, sigma, N_ctr)))
        N_ctr += 1

    s_hat = [ntt(x) for x in s]
    e_hat = [ntt(x) for x in e]
    t_hat = _matrix_vector_mul(A_hat, s_hat, k)
    t_hat = [poly_add(t_hat[i], e_hat[i]) for i in range(k)]

    ek_pke = b"".join(byte_encode(t_hat[i], 12) for i in range(k)) + rho
    dk_pke = b"".join(byte_encode(s_hat[i], 12) for i in range(k))
    return ek_pke, dk_pke


def encrypt(ek_pke: bytes, m: bytes, r_seed: bytes, params: MLKEMParams) -> bytes:
    """Algorithm 14: K-PKE.Encrypt."""
    k, du, dv, eta1, eta2 = params.k, params.du, params.dv, params.eta1, params.eta2

    t_hat = [
        byte_decode(ek_pke[i * 384:(i + 1) * 384], 12, reduce_mod_q=True)
        for i in range(k)
    ]
    rho = ek_pke[384 * k:384 * k + 32]
    A_hat = _generate_matrix(rho, k, transpose=True)

    N_ctr = 0
    r = []
    for _ in range(k):
        r.append(sample_cbd(eta1, PRF(eta1, r_seed, N_ctr)))
        N_ctr += 1
    e1 = []
    for _ in range(k):
        e1.append(sample_cbd(eta2, PRF(eta2, r_seed, N_ctr)))
        N_ctr += 1
    e2 = sample_cbd(eta2, PRF(eta2, r_seed, N_ctr))
    N_ctr += 1

    r_hat = [ntt(x) for x in r]
    u_hat = _matrix_vector_mul(A_hat, r_hat, k)
    u = [poly_add(intt(u_hat[i]), e1[i]) for i in range(k)]

    mu = decompress(byte_decode(m, 1, n=N), 1)
    t_dot_r = _dot(t_hat, r_hat, k)
    v = poly_add(poly_add(intt(t_dot_r), e2), mu)

    c1 = b"".join(byte_encode(compress(u[i], du), du) for i in range(k))
    c2 = byte_encode(compress(v, dv), dv)
    return c1 + c2


def decrypt(dk_pke: bytes, c: bytes, params: MLKEMParams) -> bytes:
    """Algorithm 15: K-PKE.Decrypt."""
    k, du, dv = params.k, params.du, params.dv
    c1_len = 32 * du * k
    c1, c2 = c[:c1_len], c[c1_len:c1_len + 32 * dv]

    u = [
        decompress(byte_decode(c1[i * 32 * du:(i + 1) * 32 * du], du), du)
        for i in range(k)
    ]
    v = decompress(byte_decode(c2, dv), dv)

    s_hat = [
        byte_decode(dk_pke[i * 384:(i + 1) * 384], 12, reduce_mod_q=True)
        for i in range(k)
    ]
    u_hat = [ntt(x) for x in u]
    s_dot_u = _dot(s_hat, u_hat, k)
    w = poly_sub(v, intt(s_dot_u))
    return byte_encode(compress(w, 1), 1)
