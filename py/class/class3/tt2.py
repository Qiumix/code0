from math import *
a = eval(input("输入a"))
b = eval(input("输入b"))
c = pow(a ** 2 + b ** 2, 0.5)
print("三边长为：a = {:.1f}, b = {:.1f}, c = {:.1f}".format(a, b, c))
print("三角形周长{:.1f}, 面积{:.1f}".format(a + b + c, a * b * 0.5))
print("锐角度数为：{:.1f}, {:.1f}".format(degrees(asin(a / c)), degrees(acos(a / c))))