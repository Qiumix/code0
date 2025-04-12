from random import randint

alpha = {12: "Queen", 13: "King", 1: "Ace", 11: "Jack"}
color = ["黑桃", "梅花", "方块", "桃心"]
color_total = set(range(4))

count = 0
while color_total:
    count += 1
    print(f"当前选则是第{count}次")
    t_num = randint(1, 52)
    cur_color, cur_num = (t_num - 1) // 13, (t_num - 1) % 13 + 1
    cur_card = alpha[cur_num] if cur_num in alpha else cur_num

    if cur_color in color_total:
        print(color[cur_color], ":", cur_card)
        color_total.remove(cur_color)

print(f"执行{count}次")
