s = "python book"
t = eval(input("输入ascii code:"))
print("ASCII码{}的字符为{}".format(t, chr(t)))

moon = "JanFebMarAprMayJunJulAugSepOctNovDec"
m = eval(input("输入月份:"))
m -= 1
print(f"月份为{moon[m * 3:m * 3 + 3]}")