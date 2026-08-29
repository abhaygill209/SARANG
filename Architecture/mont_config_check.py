from math import gcd

def check_montgomery_parameters(q:int, R:int) -> bool:

    # Check 1: R > q
    if R > q:
        pass
    else:
        return False

    # Check 2: gcd(R, q) = 1
    if gcd(R, q) == 1:
        pass
    else:
        return False

    # Check 3: R is a power of 2
    if R > 0 and (R & (R - 1)) == 0:
        pass
    else:
        return False

    # Final result
    if R > q and gcd(R, q) == 1:
        return True
    else:
        return False