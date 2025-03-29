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
    a = []
    i = 1
    t = n
    while t >= 10:
        i, t = i + 1, t // 10
    t = n
    for j in range(1, i + 1):
        a.append(t % 10)
        t //= 10
    sum = 0
    for j in range(i):
        