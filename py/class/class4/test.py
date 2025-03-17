from math import *
def dd(x, y):
    y = 1 if x > 0 else -1
    return y


def fun1(x):
    if x >= 0:
        y = sin(x) + 2 * pow(x + pow(e, 4), 0.5) - pow(x + 1, 3)
        return y
    y = log(-5 * x) - abs(x ** 2 - 8 * x) / (7 * x) + e
    return y

def fun2(x):
    if x >= 0:
        y = sin(x) + 2 * pow(x + pow(e, 4), 0.5) - pow(x + 1, 3)
    else:
        y = log(-5 * x) - abs(x**2 - 8 * x) / (7 * x) + e
    return y

def fun3(x):
    y = sin(x) + 2 * pow(x + pow(e, 4), 0.5) - pow(x + 1, 3)\
        if x >= 0 else \
        log(-5 * x) - abs(x**2 - 8 * x) / (7 * x) + e
    return y