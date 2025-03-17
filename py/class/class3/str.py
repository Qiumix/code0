p = eval(input("输入偏移值："))
month = "JanFebMarAprMayJunJulAugSepOctNovDec"
for i in range(0, month.__len__()):
    month[i] = chr((ord(month[i])) + p % 26)
print(month)
for i in range(0, month.__len__()):
    month[i] = chr((ord(month[i])) - p % 26)
