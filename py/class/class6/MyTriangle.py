def isValid(side1, side2, side3):
    if side1 + side2 <= side3 or side3 + side2 <= side1 or side1 + side3 <= side2:
        return False
    return area(side1, side2, side3)


def area(side1, side2, side3):
    p = (side1 + side2 + side3) / 2
    from math import pow
    return pow(p * (p - side1) * (p - side3) * (p - side2), 0.5)
