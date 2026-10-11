import csv
import logging
from pathlib import Path

# Configure logging format 
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s - %(levelname)s - %(message)s"
)

def to_hex(value, width=8):
    return f"{value:0{width}X}"

def process_csv(csv_path, output_dir):
    ntt_factors = {}
    intt_factors = {}
    
    with open(csv_path, 'r', encoding='utf-8') as f:
        reader = csv.DictReader(f)
        for row in reader:
            transform = row['Transform']
            stage = int(row['Stage'])
            # Assuming we want Twiddle_Montgomery values, as the original script used Montgomery
            mont_val = int(row['Twiddle_Montgomery'])
            
            if transform == 'NTT':
                if stage not in ntt_factors:
                    ntt_factors[stage] = []
                ntt_factors[stage].append(mont_val)
            elif transform == 'INTT':
                if stage not in intt_factors:
                    intt_factors[stage] = []
                intt_factors[stage].append(mont_val)
                
    # Generate mem files for NTT
    ntt_dir = output_dir / 'ntt'
    ntt_dir.mkdir(parents=True, exist_ok=True)
    for stage, factors in ntt_factors.items():
        # Stage in CSV is 0-indexed, making it 1-indexed for the filenames as per original generator
        stage_file = ntt_dir / f"stage_{stage + 1}.mem"
        with stage_file.open("w", encoding="utf-8") as f:
            for factor in factors:
                f.write(f"{to_hex(factor)}\n")
                
    # Generate mem files for INTT
    intt_dir = output_dir / 'intt'
    intt_dir.mkdir(parents=True, exist_ok=True)
    for stage, factors in intt_factors.items():
        stage_file = intt_dir / f"stage_{stage + 1}.mem"
        with stage_file.open("w", encoding="utf-8") as f:
            for factor in factors:
                f.write(f"{to_hex(factor)}\n")

def main():
    csv_path = Path("../../Algo/twiddle_factors.csv").resolve()
    # Fallback to the absolute path if relative path isn't found
    if not csv_path.exists():
        csv_path = Path("/home/abhay/OpenSource/PQC_ASIC/Algo/twiddle_factors.csv")

    output_dir = Path(__file__).resolve().parent
    
    logging.info("Reading Twiddle Factors from CSV: %s", csv_path)
    process_csv(csv_path, output_dir)
    logging.info("Success: NTT and INTT Twiddle factors generated into ntt/ and intt/ directories.")


if __name__ == "__main__":
    main()
