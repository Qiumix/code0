from random import uniform
total = 1000000
count = 0
for i in range(total):
    x, y = uniform(-1, 1), uniform(-1, 1)
    if x <= 0:
        count += 1
    elif y > 0 and x + y <= 1:
        count += 1
print(count / total)