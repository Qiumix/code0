y, m = eval(input("请输入年和月[以逗号隔开]:"))
d = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
is_run = True if m == 2 and (y % 4 == 0
                             and y % 100 != 0) or y % 400 == 0 else False
print(29 if is_run else d[m - 1])
