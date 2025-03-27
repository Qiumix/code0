def f(w = 1, h = 2):
    print(w, h)

f()
f(w = 5)
f(h = 24)
f(4, 5)


def main():
    nPrintLn(5)

def nPrintLn(n, message = "Welcome to Python!"):
    for i in range(n):
        print(message)
main()




