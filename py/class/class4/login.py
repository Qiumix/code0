Name = "admin"
Password = 123456
while True:
    name = input("输入用户名")
    if name == Name:
        break
    print("错啦")
while True:
    password = eval(input("输入密码"))
    if password == Password:
        print("密码正确，恭喜进入~")
        break
    print("密码错误，恭喜没进入！")
