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
import trace
def fib(x):
    if x == 1:
        return 1
    elif x == 0:
        return 0
    else:
        return fib(x + 1) + fib(x + 2)
fib(4)

# 这是master分支的更改