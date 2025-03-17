# name = input("Input here:")
# print("You input:", name)

from math import pi

# value = eval(input("输入数值:"))
# print("面积：", value * value * pi + \
#   "m2")#跨行

r = eval(input("输入半径:"))
print("半径为{}, 面积为{}".format(r, r * r * pi))

one, two, three = eval(input())# console input: 1, 2, 3
one = eval(input("Enter the First numver"))
two = eval(input("Enter the Second numver"))
three = eval(input("Enter the Third numver"))
avea = (one + two + three) / 3
print("The ")