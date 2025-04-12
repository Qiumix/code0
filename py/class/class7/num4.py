file_name = input("Enter a filename: ")
word = []
from keyword import kwlist
with open(file_name, 'r', encoding='utf-8') as the_file:
    for line in the_file:
        word.extend(line.lower().split())
    word = tuple(word)
    word_d = {}
    for i in word:
        if i in kwlist:
            if i not in word_d:
                word_d[i] = 1
            else:
                word_d[i] += 1
    print(word_d)
