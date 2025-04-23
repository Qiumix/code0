def trace(fun):
    return fun()


@trace
def test():
    return 1


from math import pi


class Circle:

    def __init__(self, radius=0):
        self.__radius = radius

    @property
    def radius(self):
        return self.__radius

    @radius.setter
    def radius(self, r):
        if r >= 0:
            self.__radius = r
        else:
            raise ValueError("Radius cannot be negative")

    @property
    def area(self):
        return pi * self.__radius**2

    @property
    def circumference(self):
        return 2 * pi * self.__radius


r = eval(input("半径:"))
New_cir = Circle(r)
print(f"周长：{New_cir.circumference}")
print(f"半径：{New_cir.area}")
r = eval(input("更新r: "))
New_cir.radius = r
print(f"周长：{New_cir.circumference}")
print(f"半径：{New_cir.area}")
