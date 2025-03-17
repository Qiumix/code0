from turtle import *
from math import cos
r = 75

penup()
fd(-5 * r)
pendown()

pensize(30)
color(130/255, 0, 126/255)
hideturtle()
speed(10)

for i in range(1, 5):
  right(30)
  circle(r, 60)
  right(210)

  left(30)
  circle(r, -60)
  left(210)
right(30)
circle(r, 30)

fd(r)
circle(r / 2.5,180)

fd(r / 1.5)
color("black")
pensize(10)
fd(0)
done()