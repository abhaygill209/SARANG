import numpy as np 

class Montgomery:
    def __init__(self, modulus, R=2**16):
        self.modulus = modulus
        self.R = R
        self.mod_inv = (-pow(self.modulus, -1, self.R)) % self.R  # Compute R inverse modulo modulus
        self.R2 = (self.R * self.R) % self.modulus  # Precompute R^2 mod modulus

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
