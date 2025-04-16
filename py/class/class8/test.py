def get_txt():
    txt = open("../class7/hamlet.txt", "r", encoding="utf-8").read().lower()
    return txt


word = get_txt()
count = dict()
for w in word:
    count[w] = count.get(w, 0) + 1
