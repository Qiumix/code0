from math import pow

def mon_cul(amount, rate, year):
    """
    return the value of monthlyPayment
    """
    rate = rate / 12
    return (amount * rate) / (1 - (1 / pow(1 + rate, year * 12)))

def print_all(rate, rate_gap, rate_end, amount, year):
    count = (rate_end - rate) // rate_gap + 1
    print("利率\t\t\t月付\t\t\ttotal")
    while count >= 0:
        monthly_payment = mon_cul(amount, rate, year)
        total_payment = 12 * year * monthly_payment
        print(f"{rate:.3%}\t\t\t{monthly_payment:.2f}\t\t\t{total_payment:.2f}")
        rate += rate_gap
        count -= 1

amount = eval(input("输入贷款金额"))
year = eval(input("输入整数形式年份"))

print_all(0.05, 1 / 800, 0.08, amount, year)
