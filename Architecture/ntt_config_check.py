import math

def is_prime(number: int) -> bool:
    if number < 2:
        return False
    if number == 2:
        return True
    if number % 2 == 0:
        return False

    limit = math.isqrt(number)
    for divisor in range(3, limit + 1, 2):
        if number % divisor == 0:
            return False
    return True

def true_root(root:int ,N: int, q: int) -> bool:
    # root needs to be 17²⁵⁶ ≡ 1 (mod 3329) and 17¹²⁸ ≡ −1 (mod 3329) 
    Nth_root = ((root ** N) % q == 1) and ((root ** (N // 2)) % q == q - 1)
    return Nth_root


if __name__ == "__main__":
    pass