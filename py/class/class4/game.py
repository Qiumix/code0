from random import randint

aaa = ["scissor", "rock", "paper"]
act = eval(input("scissor (0), rock (1), paper (2):"))
a = randint(0, 2)
if a == act:
    print("The computer is {}. You are {} too. It is a draw.".format(aaa[a], aaa[a]))
elif a - act == 1 or (a == 0 and act == 2):
    print("The computer is {}. You are {}. The computer won.".format(aaa[a], aaa[act]))
elif a - act == -1 or (a == 2 and act == 0):
    print("The computer is {}. You are {}. You won.".format(aaa[a], aaa[act]))
