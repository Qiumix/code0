from operator import floordiv, mul

def cul(x, f, rate):
    return f(x, rate)


rate = eval(input("美元转化为人民币的汇率:"))
con = eval(input("输入 0 表示将美元转换为人民币，输入 1 表示将人民币转换为美元："))
if con == 0:
    amount = eval(input("输入美元："))
    print("{}美元是{}人民币".format(amount, cul(amount, mul, rate)))
elif con == 1:
    amount = eval(input("输入人民币："))
    print("{}人民币是{}美元".format(amount, cul(amount, floordiv(), rate)))
else:
    print("输入错误")