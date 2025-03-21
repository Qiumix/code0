from math import pow
def isPrime(num):
    t = int(pow(num, 0.5) // 1 + 1)
    for i in range(2, t):
        if num % i == 0:
            return False
    return True
count = 0
j = 2
while True:
    if count == 50:
        break
    if isPrime(j):
        count += 1
        print(j, end = ("\n" if count % 10 == 0 else "\t"))
    j += 1
