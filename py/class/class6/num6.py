from turtle import *
penup()
goto(-160, 70)
ori_pos = pos()
num = 8
Len = 15
speed(10)
pensize(1)
pencolor("red")
fillcolor("#000000")
def fill_turtle(is_fill, Len = Len):
    if is_fill:
        begin_fill()
        for i in range(4):
            fd(Len)
            right(90)
        end_fill()
        fd(Len)
    else:
        fd(Len)
def paint():
    pendown()
    for i in range(4):
        fd(Len * num)
        right(90)
    penup()
    for i in range(num):
        for j in range(num):
            fill_turtle((i + j) % 2)
        fd(-1 * num * Len)
        right(90)
        fd(Len)
        left(90)
    goto(ori_pos)
paint()
fd(num * Len + Len)
paint()
done()