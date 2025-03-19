quit = ":q!"
while 1:
    s = input("tap in a name(is the name is \":q!\", then quit)")
    if s == quit:
        print("exit the program")
        break
    print(f"the name that you tap in is {s}")