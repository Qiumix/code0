from random import randint

a, b = randint(1, 10), randint(1, 10)
if a < b:
    a, b = b, a
answer = eval(input("{} - {}".format(a, b)))
if answer == a - b:
    print("Congratulation")
