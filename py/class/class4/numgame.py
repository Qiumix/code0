from random import randint
a = randint(1, 100)
while (True):
    t = eval(input("输入猜测数值："))
    if t > a:
        print("太大了")
    elif t < a:
        print("太小了")
    elif t == a:   
        print("正确")
        break