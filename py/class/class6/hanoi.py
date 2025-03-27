step = 1
def h(x, y, z, n):
    global step
    if n == 1:
        print(f"{step}  {x} -> {z}")
        step = step + 1
    else:
        h(x, z, y, n - 1)
        h(x, y, z, 1)
        h(y, x, z, n - 1)
h("x", "y", "z", 10)