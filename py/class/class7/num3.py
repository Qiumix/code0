file_name = input("Enter a filename: ")
word = []
with open(file_name, 'r', encoding='utf-8') as the_file:
    for line in the_file:
        word.extend(line.split())
    word = tuple(word)
    vowel_alpha = {"a", "e", "i", "o", "u"}
    con_alpha = {chr(i) for i in range(97, 97 + 27)} - vowel_alpha

    def get_vowel(word):
        if not word:
            return 0
        if word[0].lower() in vowel_alpha:
            return 1 + get_vowel(word[1:])
        return get_vowel(word[1:])

    def get_con(word):
        if not word:
            return 0
        if word[0].lower() in con_alpha:
            return 1 + get_con(word[1:])
        return get_con(word[1:])

    count1, count2 = 0, 0
    for i in word:
        count1 += get_vowel(i)
        count2 += get_con(i)

    print(f"The number of vowel is {count1} and con is {count2}")
