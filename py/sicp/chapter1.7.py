def fac(x):
    assert type(x) == int
    assert x >= 0
    if x == 1:
        return 1
    else:
        return x * fac(x - 1)

def is_odd(n):
    """
    是否是奇数
    """
    if n == 0:
        return False
    else:
        return is_even(n - 1)

def is_even(n):
    """
    是否是偶数
    """
    if n == 0:
        return True
    else:
        return is_odd(n - 1)


def facc(x):
    total = 1
    for i in range(1, x + 1):
        total *= i
    return total


def sp(n, m):
    sum = 0
    if n < 0:
        return 0
    if n == 0:
        return 1
    for i in range(1, m):
        sum += sp(n - i, m)
    return sum


def spara(n, m):
    if n < 0 or m == 0:
        return 0
    elif n == 0:
        return 1
    return spara(n - m, m) + spara(n, m - 1)

def sum_digit(n):
    if n < 10:
        return n
    return n % 10 + n // 10


def luhn(n):
    bit, sum = 0, 0
    while n > 0:
        if bit % 2:
            sum += sum_digit(n % 10) * 2
        else:
            sum += n % 10
        n //= 10
        bit += 1
    return sum


def luhn2(n):
    sum = 0
    sum += l_odd(n)
    return sum


def l_even(n):
    if n == 0:
        return 0
    return l_odd(n // 10) + 2 * sum_digit(n % 10)


def l_odd(n):
    if n == 0:
        return 0
    return l_even(n // 10) + n % 10
