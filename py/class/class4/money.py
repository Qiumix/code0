password = 123456
for i in range(0, 3):
    p = eval(input("请输入六位数的密码"))
    if p == password:
        print("密码正确")
        break
    elif i ==2:
        print("错了三次")
    elif p != password:
        print("密码错误")