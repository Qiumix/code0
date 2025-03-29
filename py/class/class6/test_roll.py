from random import randint


def roll(side):
    return lambda: randint(1, side)


six_side_roll = roll(6)
roll_two = lambda: (six_side_roll(), six_side_roll())


def check(num, lose=None, win=None):
    lose = lose or {2, 3, 12}
    win = win or {7, 11}
    if num in win:
        print("You Win")
        return 0
    print("You Lose" if num in lose else None)
    return True if num in lose else False


def roll_dice(lose=None, win=None):
    x, y = roll_two()
    total = x + y
    print(f"The sum of the num you rolled: {x} + {y} = {total}")
    return check(total, lose, win), total


def play():
    result, point = roll_dice()
    if result:
        return
    print(f"The target number is {point}")
    while roll_dice(lose=[7], win=[point])[0] == 2:
        pass
play()