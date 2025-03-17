from turtle import *
x1 ,y1 = eval(input("输入第一个点坐标："))
x2 ,y2 = eval(input("输入第二个点坐标："))
from math import pow
distance = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5)
penup()
hideturtle()
speed(10)
goto(x1, y1)
pendown()
goto(x2, y2)

