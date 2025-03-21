# def sum_num(s, e):
#     sum = 0
#     for i in range(s, e + 1):
#         sum += i
#     return sum
# def adder(x):
#     return lambda y: x + y
# adder3 = adder(3)

def f1(n, m):
    f2(3.4)
def f2(n):
    if n > 0:
        return 1
    elif n == 0:
        return 0
    elif n < 0:
        return -1
f1(3, 4)
# 没有打印
print("")
######
"""
def main():
    print(min(n1, n2))

def min(n1, n2):
    smallest = n1
    if n2 < n1:
        smallest = n2
    return smallest
main()
print("")
# 参数没定义
"""