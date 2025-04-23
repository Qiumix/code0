# 骰子英文是不是拼错了？cs61a的hog项目里用的Dice
class Dice:
    from random import randint as __ra

    def __init__(self, side=6):
        self.__side = side
        self.roll_dice = lambda: self.__ra(1, self.__side)

    def get_side(self):
        return self.__side


side = [6, 10, 20]
all_dice = [Dice(i) for i in side]
for cur_dice in all_dice:
    roll = [cur_dice.roll_dice() for _ in range(10)]
    print(f"10 rolls of a {cur_dice.get_side()}-sided dice:")
    print(roll, "\n")
