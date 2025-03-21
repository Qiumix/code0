n = 8
for i in range(0, n):
    for j in range(0, n - i - 1):
        print(end="\t")
    for j in range(0, i * 2 + 1):
        print(2 ** (i - abs(j - i)), end="\t")
    print()
