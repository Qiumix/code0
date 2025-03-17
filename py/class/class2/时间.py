import time
Time = time.perf_counter()

时间戳 = time.time()
秒 = 时间戳 % 60
时间戳 //= 60
分 = 时间戳 % 60
时间戳 //= 60
时 = 时间戳 % 24 + 8
时 %= 24

print("当前时间是{:.0f}:{:.0f}:{:.0f}".format(时, 分, 秒))


Time = time.perf_counter() - Time
print(Time)