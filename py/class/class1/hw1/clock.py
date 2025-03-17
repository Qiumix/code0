import turtle

turtle.speed(1)

turtle.color("blue")
turtle.fd(80)

turtle.goto(0, 0)
turtle.left(90)
turtle.color("red")
turtle.fd(100)

turtle.goto(0, 0)
turtle.left(90)
turtle.color("green")
turtle.fd(60)

turtle.penup()
turtle.goto(0, -150)
turtle.pendown()
turtle.right(180)
turtle.color("black")

turtle.circle(150)
turtle.penup()
turtle.goto(0, -170)
turtle.write("9:15:00", align="center")
turtle.goto(-5, -145)
turtle.write("6")
turtle.goto(-140, -5)
turtle.write("9")
turtle.goto(140, -5)
turtle.write("3")
turtle.goto(0, 135)
turtle.write("12")

turtle.hideturtle()

turtle.done()