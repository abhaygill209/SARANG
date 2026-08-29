import logging 
import yaml
import math
import yaml_parser as yp
import MontgomeryMul as mont

from pathlib import Path


# Configure logging format 
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s - %(levelname)s - %(message)s"
)


def twiddle_gen_NTT(q, w, n, R):
    twiddle_factors = []

    for i in range(int(math.log2(n))):
        temp = []

        for j in range(2**i):
            exponent = j * n // (2**(i + 1))
            factor = pow(w, exponent, q)
            conv = mont.Montgomery(q, R)
            temp.append(conv.to_mont(factor))

        twiddle_factors.append(temp)

    return twiddle_factors

def to_hex(value, width=8):
    return f"{value:0{width}X}"


def mem_file_gen(twiddle_factors, file_path):
    output_dir = Path(file_path)
    output_dir.mkdir(parents=True, exist_ok=True)

    for stage_index, factors in enumerate(twiddle_factors, start=1):
        stage_file = output_dir / f"stage_{stage_index}.mem"
        with stage_file.open("w", encoding="utf-8") as f:
            for factor in factors:
                f.write(f"{to_hex(factor)}\n")

def main():
    config_path = Path("../../Architecture/DesignConfig.yaml")

    with config_path.open("r", encoding="utf-8") as config_file:
            config_data = yaml.safe_load(config_file)
    
    config = yp.DesignConfig.from_dict(config_data)

    #extracting NTT parameters
    ntt = config.sections["NTT_Parameters"]
    montgom = config.sections["Montgomery_params"]

    logging.info("NTT Parameters - q: %d, w: %d, n: %d", ntt.q, ntt.w, ntt.n)

    NTT_Factors = twiddle_gen_NTT(ntt.q, ntt.w, ntt.n, montgom.aux_q)
    mem_file_gen(NTT_Factors, Path(__file__).resolve().parent)

    logging.info("Success: NTT Twiddle factors generated.")


if __name__ == "__main__":
    main()
