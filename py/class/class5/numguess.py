from random import randint

Range = 100000000000
n = randint(1, Range)
count = 0
while True:
    t = int(input("输入猜测的整数"))
    if t < 1 or t > Range:
        print("out of the Range!")
        continue

    count += 1

    if t == n:

        print("bingo!")
        break
    elif t > n:
        print("too big")
    elif t < n:
        print("too small")
    else:
        print("error")
        break