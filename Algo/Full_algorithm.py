import numpy as np
import csv


def to_montgomery(x, q, R):
    return (x * R) % q


def iterative_ntt_dif(a, q, W, R, csv_writer, print_arithmetic=True):

    n = len(a)
    a = np.array(a, dtype=np.int64).copy()

    stage = 0
    length = n

    while length >= 2:

        half = length // 2
        wlen = pow(W, n // length, q)

        # ------------------------------------------------
        # Generate and print twiddle factors
        # ------------------------------------------------
        twiddles = []
        w = 1

        for i in range(half):

            twiddles.append(w)

            w_mont = to_montgomery(w, q, R)

            csv_writer.writerow([
                "NTT",
                stage,
                length,
                i,
                w,
                w_mont
            ])

            w = (w * wlen) % q

        print(f"\n{'=' * 70}")
        print(f"NTT STAGE {stage}")
        print(f"Length                 : {length}")
        print(f"wlen                   : {wlen}")
        print(f"wlen Montgomery        : {to_montgomery(wlen, q, R)}")
        print(f"Twiddle factors        : {twiddles}")
        print(
            f"Twiddle factors (Mont) : "
            f"{[to_montgomery(t, q, R) for t in twiddles]}"
        )
        print(f"{'=' * 70}")

        # ------------------------------------------------
        # DIF butterflies
        # ------------------------------------------------
        butterfly = 0

        for start in range(0, n, length):

            w = 1

            for j in range(start, start + half):

                u = int(a[j])
                v = int(a[j + half])

                # ----------------------------------------
                # Normal-domain arithmetic
                # ----------------------------------------
                add_result = (u + v) % q
                sub_result = (u - v) % q
                mult_result = (sub_result * w) % q

                # ----------------------------------------
                # Print arithmetic in Montgomery form
                # ----------------------------------------
                if print_arithmetic:

                    u_m = to_montgomery(u, q, R)
                    v_m = to_montgomery(v, q, R)
                    w_m = to_montgomery(w, q, R)

                    add_m = to_montgomery(add_result, q, R)
                    sub_m = to_montgomery(sub_result, q, R)
                    mult_m = to_montgomery(mult_result, q, R)

                    print(
                        f"\nNTT Stage {stage} | "
                        f"Butterfly {butterfly}"
                    )

                    print(f"  Index           : {j}, {j + half}")

                    print(f"  u               = {u_m}")
                    print(f"  v               = {v_m}")
                    print(f"  w               = {w_m}")

                    print(f"  u + v           = {add_m}")
                    print(f"  u - v           = {sub_m}")
                    print(f"  (u-v) * w       = {mult_m}")

                    print(
                        f"  Output          = "
                        f"[{add_m}, {mult_m}]"
                    )

                # ----------------------------------------
                # Update array using normal-domain values
                # ----------------------------------------
                a[j] = add_result
                a[j + half] = mult_result

                w = (w * wlen) % q
                butterfly += 1

        print(f"\nNTT output after stage {stage}:")

        print("Normal domain:")
        print(a)

        print("Montgomery domain:")
        print(
            [to_montgomery(int(x), q, R) for x in a]
        )

        length //= 2
        stage += 1

    return a


def iterative_intt_dit(a, q, W, R, csv_writer, print_arithmetic=True):
    n = len(a)
    a = np.array(a, dtype=np.int64).copy()

    W_inv = pow(W, -1, q)

    length = 2
    stage = 0

    while length <= n:

        half = length // 2
        wlen = pow(W_inv, n // length, q)

        w = 1

        for i in range(half):

            w_mont = to_montgomery(w, q, R)

            csv_writer.writerow([
                "INTT",
                stage,
                length,
                i,
                w,
                w_mont
            ])

            w = (w * wlen) % q

        print(f"\n{'=' * 70}")
        print(f"INTT STAGE {stage}")
        print(f"Length: {length}")
        print(f"wlen: {wlen}")
        print(f"{'=' * 70}")

        butterfly = 0

        for start in range(0, n, length):

            w = 1

            for j in range(start, start + half):

                u = int(a[j])
                upper = int(a[j + half])

                wv = (w * upper) % q

                add_result = (u + wv) % q
                sub_result = (u - wv) % q

                if print_arithmetic:

                    u_m = to_montgomery(u, q, R)
                    upper_m = to_montgomery(upper, q, R)
                    w_m = to_montgomery(w, q, R)
                    wv_m = to_montgomery(wv, q, R)

                    add_m = to_montgomery(add_result, q, R)
                    sub_m = to_montgomery(sub_result, q, R)

                    print(f"\nINTT Stage {stage} | Butterfly {butterfly}")

                    print(f"  u       = {u_m}")
                    print(f"  upper   = {upper_m}")
                    print(f"  w       = {w_m}")

                    print(f"  w*upper = {wv_m}")
                    print(f"  u + wv  = {add_m}")
                    print(f"  u - wv  = {sub_m}")

                    print(
                        f"  Output  = "
                        f"[{add_m}, {sub_m}]"
                    )

                a[j] = add_result
                a[j + half] = sub_result

                w = (w * wlen) % q
                butterfly += 1

        length *= 2
        stage += 1

    n_inv = pow(n, -1, q)

    print(f"\n{'=' * 70}")
    print("INTT FINAL SCALING")
    print(f"N^-1 mod q = {n_inv}")
    print(f"N^-1 Montgomery = {to_montgomery(n_inv, q, R)}")
    print(f"{'=' * 70}")

    a = (a * n_inv) % q

    return a


# ============================================================
# Parameters
# ============================================================

N = 256
q = 7681
W = 3844

R = 2**16

# ============================================================
# Generate input
# ============================================================
np.random.seed(42)
a = np.random.randint(0, q, N)

# ============================================================
# NTT + INTT
# ============================================================

with open("twiddle_factors.csv", "w", newline="") as f:
    writer = csv.writer(f)

    writer.writerow([
        "Transform",
        "Stage",
        "Length",
        "Twiddle_Index",
        "Twiddle_Normal",
        "Twiddle_Montgomery"
    ])

    a_cap = iterative_ntt_dif(
        a,
        q,
        W,
        R,
        writer,
        print_arithmetic=True
    )

    a_back = iterative_intt_dit(
        a_cap,
        q,
        W,
        R,
        writer,
        print_arithmetic=True
    )


# ============================================================
# Save input / NTT / INTT results
# ============================================================

with open("Input_output_NTT_INTT.csv", "w", newline="") as f:
    writer = csv.writer(f)

    writer.writerow([
        "Index",
        "Input",
        "NTT",
        "INTT"
    ])

    for i in range(len(a)):
        writer.writerow([
            i,
            to_montgomery(a[i], q, R),
            to_montgomery(a_cap[i], q, R),
            to_montgomery(a_back[i], q, R)
        ])


# ============================================================
# Verify
# ============================================================

assert np.array_equal(
    to_montgomery(a, q, R),
    to_montgomery(a_back, q, R)
), "NTT and inverse NTT did not recover the original polynomial."

print("\nNTT -> INTT verification PASSED.")