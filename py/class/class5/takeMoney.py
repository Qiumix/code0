PASSWARD: int = 123456
count = 0
while 1:
    if count == 3:
        print("密码已经错误三次")
        break
    passward: int = eval(input("请输入六位数密码"))
    if passward == PASSWARD:
        print("密码输入正确，正式进入系统！")
        break
    else:
        count += 1
        print(f"输错了{count}次密码")