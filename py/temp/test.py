def flip(flop):
    if flop > 2:
        return None
    flip = lambda flip: 3
    return flip


def flop(flip):
    return flop


flip, flop = flop, flip

print(flip(3)(3))

def itself(x):
    print(x)
    return itself







def summation(n, f):
    total, i = 0, 1
    while i < n + 1:
        total, i = total + f(i), i + 1
    return total


def pi_sum(x):
    return 8 / ((4 * x - 3) * (4 * x - 1))


pi = summation(1000000, pi_sum)
print(pi)


def improve(update, close, guess=1):
    while not close(guess):
        guess = update(guess)
    return guess


def golden_update(guess):
    return 1 / guess + 1


def approx_eq(x, y, tolerance=1e-20):
    return abs(x - y) < tolerance


def square_close_to_successor(guess):
    return approx_eq(guess * guess, guess + 1)


c = improve(golden_update, square_close_to_successor)

print(f"{c:.20f}")
