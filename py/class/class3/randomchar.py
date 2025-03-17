from time import time
temp = time() * 10 ** 7
temp = int(temp)
temp = temp % 26 + 65
print(chr(temp))