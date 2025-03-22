from math import pow
def remove(n, digit):
    assert digit > 0 and digit < 10
    kept, digits = 0, 0
    while n > 0:
        n, last = n // 10, n % 10
        if  last != digit:
            kept = kept + last * 10 ** digits
            digits = digits + 1

    return int(kept)