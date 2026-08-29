import numpy as np 
import logging 

logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] %(message)s",
    datefmt="%H:%M:%S"
)

logger = logging.getLogger(__name__)

class Montgomery:
    def __init__(self, modulus, R=2**16):
        self.modulus = modulus
        self.R = R
        self.mod_inv = (-pow(self.modulus, -1, self.R)) % self.R  # Compute R inverse modulo modulus
        self.R2 = (self.R * self.R) % self.modulus  # Precompute R^2 mod modulus
        logging.info(f"Montgomery Reduction Parameters: modulus={self.modulus}, R={self.R}, mod_inv={self.mod_inv}")

    def to_mont(self, x):
        """Convert x to Montgomery form."""
        return self.redc(x * self.R2)

    def from_mont(self, x):
        """Reduce x from Montgomery form back to standard representation."""
        return self.redc(x) 
    
    def redc(self, T):
        """Montgomery reduction algorithm."""
        if T > self.modulus * self.R:
            print(f"T={T} is too large for Montgomery reduction with modulus={self.modulus} and R={self.R}.")
            return 0
        m = (T * self.mod_inv) % self.R
        t = (T + m * self.modulus) // self.R
        ##For debugging purposes 
        #print(f"Reducing T={T}: m={m}, t={t}")
        if t >= self.modulus:
            return t - self.modulus
        else:
            return t

if __name__ == "__main__":
    
    #ML-KEM and ML-DSA mod.
    mod_mlkem = 3329
    mod_mldsa = 8380417
    #Auxilary variable for Montgomery reduction 
    R = 2**16
    # Biggest 16 bit number
    Max16_bit = 2**16 - 1

    ### TEST ###
    # Montgomery Conversion and Reduction tests
    # Test:
    # Convert a random number to Montgomery form and then reduce it back to its original form

    logger.info("Testing Montgomery Conversion and Reduction...")

    #Test cases
    test_case_1 = np.random.randint(0, Max16_bit, size=5000)
    #test_case_1 = np.linspace(0, Max16_bit, num=100, dtype=int)
    #test_case_1 = [20]

    #ML-KEM parameters testing 
    logging.info("Testing ML-KEM Montgomery Reduction...")
    ml_kem = Montgomery(mod_mlkem)
    for x in test_case_1:
        mont_x = ml_kem.to_mont(x)
        reduced_x = ml_kem.from_mont(mont_x)
        if reduced_x != x % mod_mlkem:
            logger.error(f"Failed for x={x}: got {reduced_x}, expected {x % mod_mlkem}")
            break

    #ML-DSA parameters testing
    logging.info("Testing ML-DSA Montgomery Reduction...")
    ml_dsa = Montgomery(mod_mldsa)
    for x in test_case_1:
        mont_x = ml_dsa.to_mont(x)
        reduced_x = ml_dsa.from_mont(mont_x)
        if reduced_x != x % mod_mldsa:
            logger.error(f"Failed for x={x}: got {reduced_x}, expected {x % mod_mldsa}")
            break
