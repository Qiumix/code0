from math import *

x1, y1 = eval(input("输入点1(经纬度)，单位为度:"))
x2, y2 = eval(input("输入点2(纬度和经度)，单位为度:"))

R = 6371.01

xr1, xr2 = radians(x1), radians(x2)
yr1, yr2 = radians(y1), radians(y2)

d = R * acos(sin(xr1) * sin(xr2) + cos(xr1) * cos(xr2) * cos(yr2 - yr1))

print("两点之间的距离是: {} km".format(d))

assert abs(y2) <= 90 and abs(y1) <= 90, "纬度应该在90 ~ -90"
assert abs(x2) <= 180 and abs(x1) <= 180, "经度应该在180 ~ -180"

# 下次题目好好写，公式都错了，给的点也不在地球上ww
