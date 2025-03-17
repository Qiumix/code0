from math import pi
from turtle import *
xy = eval(input("输入圆心坐标"))
r = eval(input("输入半径："))

hideturtle()

penup()
goto(xy)
write(r ** 2 * pi, align = "center")
right(90)
fd(r)
left(90)
pendown()

circle(r)
done()