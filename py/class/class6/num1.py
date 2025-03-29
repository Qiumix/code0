def m(fun):

    def summation(i):
        sum = 0
        for j in range(1, i + 1):
            sum += 4 * fun(j)
        return sum
# 柯里化
    return summation


def total(x):
    if x % 2 == 0:
        return -1 * (1 / (2 * x - 1))
    return 1 / (2 * x - 1)

test = [1, 101, 201]
for i in test:
    print(f"{m(total)(i):.4f}")
