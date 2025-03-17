for i in range(1, 10):
    for j in range(1, i + 1):
        endl = "\n" if i == j else "\t"
        print("{}*{}={}".format(j, i, i * j), end = endl)
