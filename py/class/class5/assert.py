while 1:
    try:
        print("输入Q退出")
        s1 = input("输入数")
        if s1 =="Q":
            break
        s1 = int(s1)

        s2 = input("输入数")
        if s2 =="Q":
            break
        s2 = int(s2)
        
        print(f"{s1} + {s2} = {s1 + s2}")
    except:
        print("输入要求是数字")
    finally:
        print("", end = "")
