from pathlib import Path

import yaml
import ntt_config_check as ntt_check
import mont_config_check as mont_check
import datawidth_config_check as datawidth_check
import yaml_parser as yp
import logging 


# Configure logging format 
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s - %(levelname)s - %(message)s"
)


def main():
    config_path = Path(__file__).with_name("DesignConfig.yaml")

    with config_path.open("r", encoding="utf-8") as config_file:
        config_data = yaml.safe_load(config_file)

    config = yp.DesignConfig.from_dict(config_data)

    # reading NTT parameter values 
    ntt = config.sections["NTT_Parameters"]

    # NTT parameter checks
    if ntt_check.is_prime(ntt.q):
        logging.info("NTT q = %d is Valid", ntt.q)
    else:
        logging.error("NTT q is not a prime number.")
        exit(1)

    if ntt_check.true_root(ntt.w, ntt.n, ntt.q):
        logging.info("NTT w = %d is Valid", ntt.w)
    else:
        logging.error("NTT w is not a true root of unity modulo q.")
        exit(1)

    # reading Montgomery parameter values 
    mont = config.sections["Montgomery_params"]

    ## Montgomery parameter checks
    if mont_check.check_montgomery_parameters(ntt.q, mont.aux_q):
        logging.info("Montgomery parameter aux_q = %d is Valid", mont.aux_q)
    else:
        logging.error("Montgomery parameters are INVALID")
        exit(1)

    # Data_width Checks
    data_bits = config.sections["Accelerator_params"]
    if datawidth_check.check_data_width(data_bits.DataWidth, ntt.q):
        logging.info("Data width = %d is Valid", data_bits.DataWidth)
    else:
        logging.error("Data width is INVALID")
        exit(1)

if __name__ == "__main__":
    main()
