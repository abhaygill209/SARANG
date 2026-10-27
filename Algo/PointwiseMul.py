import numpy as np
import csv

# ============================================================
# Parameters
# ============================================================

R = 2**16
mod = 7681
N = 256

np.random.seed(42)

# Generate random ordinary modular coefficients
a = np.random.randint(0, mod, size=N)
b = np.random.randint(0, mod, size=N)

# Montgomery constants
R_mod = R % mod
R_inv = pow(R, -1, mod)

# Q_INV = -Q^(-1) mod R
Q_INV = (-pow(mod, -1, R)) % R

print("Montgomery Parameters")
print("---------------------")
print(f"N      : {N}")
print(f"Q      : {mod}")
print(f"R      : {R}")
print(f"R mod Q: {R_mod}")
print(f"R_INV  : {R_inv}")
print(f"Q_INV  : {Q_INV}")


# ============================================================
# Montgomery Conversion
# ============================================================

def to_montgomery(x):
    return (int(x) * R) % mod


def from_montgomery(x):
    return (int(x) * R_inv) % mod


# ============================================================
# Montgomery Multiplication
# ============================================================

def montgomery_mul(a, b):
    return (int(a) * int(b) * R_inv) % mod


# ============================================================
# Encode Inputs into Montgomery Representation
# ============================================================

a_mont = np.array([to_montgomery(x) for x in a], dtype=np.int64)
b_mont = np.array([to_montgomery(x) for x in b], dtype=np.int64)


# ============================================================
# Pointwise Montgomery Multiplication
# ============================================================

c_mont = np.zeros(N, dtype=np.int64)

for i in range(N):
    c_mont[i] = montgomery_mul(a_mont[i], b_mont[i])


# ============================================================
# Decode Outputs for Verification
# ============================================================

c_decoded = np.array(
    [from_montgomery(x) for x in c_mont],
    dtype=np.int64
)

# Expected ordinary pointwise multiplication
expected = (a * b) % mod


# ============================================================
# Verify Results
# ============================================================

print("\nVerification")
print("------------")
print("Decoded output matches ordinary multiplication:",
      np.array_equal(c_decoded, expected))

if not np.array_equal(c_decoded, expected):
    raise AssertionError("Montgomery multiplication verification failed!")


# ============================================================
# Write Inputs and Outputs to CSV
# ============================================================

csv_filename = "pointwise_montgomery_results.csv"

with open(csv_filename, mode="w", newline="") as csvfile:

    writer = csv.writer(csvfile)

    # CSV header
    writer.writerow([
        "Index",
        "A_Ordinary",
        "B_Ordinary",
        "A_Montgomery",
        "B_Montgomery",
        "Output_Montgomery",
        "Output_Decoded"
    ])

    # Write each pointwise multiplication result
    for i in range(N):

        writer.writerow([
            i,
            int(a[i]),
            int(b[i]),
            int(a_mont[i]),
            int(b_mont[i]),
            int(c_mont[i]),
            int(c_decoded[i])
        ])


print(f"\nCSV file generated successfully: {csv_filename}")


# ============================================================
# Print First 10 Results
# ============================================================

print("\nFirst 10 Results")
print("----------------")

for i in range(10):
    print(
        f"Index={i:3d} | "
        f"A_Mont={a_mont[i]:4d} | "
        f"B_Mont={b_mont[i]:4d} | "
        f"C_Mont={c_mont[i]:4d} | "
        f"C_Decoded={c_decoded[i]:4d}"
    )