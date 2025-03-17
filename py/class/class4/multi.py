grade, mark = eval(input("输入分数"))

if mark >= 90:
    grade = "优"
elif mark >= 80:
    grade = "良"
elif mark >= 70:
    grade = "中"
elif mark >= 60:
    grade = "及格"
else:
    grade = "不及格"

print(grade)

statue, year = False, eval(input("输入年份"))

if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
    statue = True
if statue:
    print("是闰年")
else:
    print("不是闰年")