alt = [chr(i) for i in range(97, 97 + 26)] + list(range(10))
my_ticket = [7, 'b', 8, 'a']
Len = len(alt)
# iteration = [0] * 4
# is_found = False
# for iteration[0] in range(Len - 3):
#     if is_found:
#         break
#     for iteration[1] in range(iteration[0] + 1, Len - 2):
#         if is_found:
#             break
#         for iteration[2] in range(iteration[1] + 1, Len - 1):
#             if is_found:
#                 break
#             for iteration[3] in range(iteration[2], Len):
#                 if is_found:
#                     break
#                 if set([
#                         alt[iteration[0]],
#                         alt[iteration[1]],
#                         alt[iteration[2]],
#                         alt[iteration[3]],
#                 ]) == set(my_ticket):
#                     is_found = True
# print("We have a winning ticket!\n")
# print(f"Your ticket: {[alt[x] for x in iteration]}\n")
# print(f"Winning ticket: {my_ticket}\n")
# print(
#     f"It only took {(iteration[0] + 1) * (36 ** 3) + (iteration[1] + 1) * (36 ** 2) + (iteration[2] + 1) * 36 + (iteration[3] + 1)} times to win"
# )
ticket2 = list(my_ticket)
t = []
count = 0
for _ in range(4):
    for i in alt:
        count += 1
        if i in ticket2:
            t.append(i)
            ticket2.remove(i)
            break
print("We have a winning ticket!\n")
print(f"Your ticket: {t}\n")
print(f"Winning ticket: {my_ticket}\n")
print(f"It only took {count} times to win")
