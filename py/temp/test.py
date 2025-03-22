def flip(flop):
    if flop > 2:
        return None
    flip = lambda flip: 3
    return flip


def flop(flip):
    return flop


flip, flop = flop, flip

print(flip(flop(1)(2))(3))
flip(3)(3)