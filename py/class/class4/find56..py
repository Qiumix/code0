# 5.13
i, j = 100, 0
while i <= 200:
    if i % 5 == 0 and i % 6 == 0:
        endl = "\n" if j % 10 == 0 and j != 0 else " "
        j += 1
        print(i, end = endl)
    i += 1
    
    
# 5.14

n = 0
while n ** 2 <= 12000:
    n += 1
print("\n",n)