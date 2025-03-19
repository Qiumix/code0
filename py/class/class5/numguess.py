from random import randint
Range = 100000000000
n = randint(1, Range)

while True:
    t = int(input("输入猜测的整数"))
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