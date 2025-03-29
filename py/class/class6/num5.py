def is_Cap(char):
    num = ord(char)    
    if num >= 65 and num <= 90:
        return True
    return False
str = input("Tap in your string\n")
length = len(str)
sum = 0
for i in range(1, length):
    if is_Cap(str[i]):
        sum += 1
print(sum)        