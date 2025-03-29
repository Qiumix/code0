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



