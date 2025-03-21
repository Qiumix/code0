def main():
    print(min(min(5, 6), 51))

def min(x:int, y:int) -> int:
    return x if (x < y) else y

main()
