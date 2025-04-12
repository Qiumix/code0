card = [x for x in range(1, 14)] * 4


def search(card_take, card_remain):
    sum_num = sum(card_take)
    if sum_num == 24 and len(card_take) == 4:
        return 1
    elif card_remain == [] or sum_num > 24 or len(card_take) > 4:
        return 0
    return search(card_take + [card_remain[0]], card_remain[1:]) \
         + search(card_take, card_remain[1:])
    # No side effect, I'd like


print(f"选中满足和为24的次数为:{search([], card)}")
