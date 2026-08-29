import argparse
import csv
from pathlib import Path

from MontgomeryMul import Montgomery


def convert_stage_values(input_path, output_path, modulus, radix):
	montgomery = Montgomery(modulus, radix)

	with input_path.open(newline="") as input_file:
		stages = csv.reader(input_file)
		converted_stages = [
			[montgomery.to_mont(int(value)) for value in stage]
			for stage in stages
		]

	with output_path.open("w", newline="") as output_file:
		writer = csv.writer(output_file)
		writer.writerows(converted_stages)

	return len(converted_stages), len(converted_stages[0]) if converted_stages else 0


def main():
	parser = argparse.ArgumentParser(
		description="Convert NTT stage values to Montgomery representation"
	)
	parser.add_argument(
		"--input",
		type=Path,
		default=Path("stage_values.csv"),
		help="Input CSV containing normal-domain stage values",
	)
	parser.add_argument(
		"--output",
		type=Path,
		default=Path("montgomery_stage_values.csv"),
		help="Output CSV for Montgomery-domain stage values",
	)
	parser.add_argument(
		"--modulus",
		type=int,
		default=3329,
		help="Montgomery modulus",
	)
	parser.add_argument(
		"--radix",
		type=int,
		default=2**16,
		help="Montgomery radix R; must be greater than the modulus and coprime to it",
	)
	args = parser.parse_args()

	rows, columns = convert_stage_values(
		args.input, args.output, args.modulus, args.radix
	)
	print(f"Converted {rows} stages with {columns} values each.")
	print(f"Montgomery stage values stored in {args.output}")


if __name__ == "__main__":
	main()
