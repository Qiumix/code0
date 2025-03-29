from MyTriangle import *
s1, s2, s3 = eval(input("输入三边"))
t = isValid(s1, s2, s3)
if not t:
    print("The Triangle is invalid")
else:
    print(f"The area is {t:.2f}")