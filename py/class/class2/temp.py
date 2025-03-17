temp = num = eval(input("输入0 ~ 1000 之间的整数："))
sum = 0
while num > 0:
  num, sum = num // 10, sum + num % 10
print("数字{}的所有数字的和为：{}".format(temp, sum))


num = eval(input("输入"))
print("输出", end = '')
while num != 0:
  print(num % 10, end = '')
  num //= 10