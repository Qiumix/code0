# def f(n, x = 0, y = 1):
#     if n == 0:
#         return
#     print(x, end = " ")
#     f(n - 1, y, x + y)

# def h(n):
#     if n == 1:
#         return 1
#     t = 1 / n
#     return h(n - 1) + t
# print(h(2))

str = input("输入字符串")
def out(str, n):
    if n == 0:
        print(str[n], end = "")
        return
    print(str[n], end = "")
    out(str, n - 1)
out(str, len(str) - 1)
























# def di(x):
#     if x < 0:
#         return
#     else:
#         print("hello world")
#         di(x - 1)
# def pow_int(x, y:int):
#     if y < 0:
#         return pow(x, y + 1) / x
#     elif y > 0:
#         return pow(x, y - 1) * x
#     else:
#         return 1
# print(pow(2, 16) - 1)
# print(pow(2, -1))

