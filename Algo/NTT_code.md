# How to Run `NTT_code.py`

`NTT_code.py` generates an input vector and performs a forward Number Theoretic Transform (NTT). It prints the input, final NTT output, and all intermediate stage values. The stage values are also written to a CSV file.

## Requirements

- Python 3
- NumPy

Install NumPy if required:

```bash
python3 -m pip install numpy
```

## Run With Defaults

From the `Algo` directory:

```bash
cd Algo
python3 NTT_code.py
```

No command-line argument is mandatory. If an argument is omitted, its default value is used.

## Arguments

```text
python3 NTT_code.py [arguments]
```

| Argument | Default | Significance and valid input |
| --- | ---: | --- |
| `--n` | `256` | NTT length. Must be a positive power of two: `1, 2, 4, 8, ...`. |
| `--q` | `3329` | Modulus used for all calculations. It should be a positive modulus. Generated input values are in the range `0` to `q - 1`. |
| `--root` | `17` | Primitive `N`-th root of unity used by the NTT. It must be mathematically valid for the selected `N` and `q`. |
| `--seed` | `42` | Integer random seed. It selects the generated input vector; using the same seed and parameters reproduces the same input. |
| `--output` | `stage_values.csv` | CSV output path. It may be a relative or absolute path. |

The script does not verify whether `q` and `root` form a mathematically valid NTT configuration. The user must provide compatible values when changing them.

## Example With Custom Arguments

```bash
python3 NTT_code.py \
  --n 256 \
  --q 3329 \
  --root 17 \
  --seed 42 \
  --output /tmp/ntt_stage_values.csv
```

For this example, the script generates 8 input values in the range `0` through `16` and performs an 8-point NTT modulo `17`.

## Input Range

The script generates the input internally; it does not read input values from a file or from the command line. For a modulus `q`, every generated input value satisfies:

```text
0 <= input value < q
```

The input vector contains exactly `N` values.

## Where Output Is Stored

The following are printed in the terminal:

- Generated input vector
- Final NTT output vector
- Intermediate stage values

The intermediate stage values are stored in the file specified by `--output`.

With the default command, the file is:

```text
Algo/stage_values.csv
```

The path is relative to the directory from which the command is run. For example, running `python3 Algo/NTT_code.py` from the repository root writes to:

```text
stage_values.csv
```

The CSV file has no header. It contains one row for the bit-reversed input and one row for each NTT stage. For `N=256`, it contains 9 rows and 256 columns.
