from random import randint
def roll(side):
    def inner():
        return randint(1, side)
    return inner

six_side_dice = roll(6)
roll_two = lambda: (six_side_dice(), six_side_dice())
###### Make Roll Dice ######
def check(num, lose = [2, 3, 12], win = [7, 11]):
    if num in win or num in lose:
        print("You Win" if num in win else "You Lose")
        return True
    return False

def roll_dice(lose = None, win = None):
    x, y = roll_two()
    print(f"The sum of the num that you roll is:{x} + {y} = {x + y}")
    if lose == None:
        t = check(x + y)
        return t, x + y
    t = check(x + y, lose, win)
    return t
##### Support Function #####
def play():
    t, num = roll_dice()
    if t:
        return
    print(f"The num that you set is {num}")
    while True:
        if roll_dice([7], [num]):
            return
play()
