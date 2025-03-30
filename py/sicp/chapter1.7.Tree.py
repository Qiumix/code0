def incas(x):
    grow(x)
    print(x)
    shrink(x)


def f_then_g(f, g, n):
    if n:
        f(n)
        g(n)


grow = lambda n: f_then_g(grow, print, n // 10)
shrink = lambda n: f_then_g(print, shrink, n // 10)
from ucb import trace
@trace
def fib(x):
    if x == 1 or x == 0:
        return x
    elif x < 0:
        return fib(x + 2) - fib(x + 1)
    return fib(x - 1) + fib(x - 2)
@trace
def sp(n, m):
    if n < 0:
        return 0
    if n == 0 or m == 1:
        return 1
    return sp(n - m, m) + sp(n, m - 1)
t = sp(6, 4)
print("\n\n", t)