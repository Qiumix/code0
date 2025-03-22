days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
months = ["January", "February", "March", "April", "May", "June", \
          "July", "August", "September", "October", "November", "December"]
weekdays = [ "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]

def is_run(year):
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        return True
    return False

def print_month(week, day):
    """
    :param month:从零开始
    :param week:从零开始，星期日为零
    """
    offset = week
    for i in range(offset):
        print(end = "\t")
    for i in range(1, day + 1):
        print((i if i > 9 else f" {i}"), end = ("\n" if (offset + i) % 7 == 0 else "\t"))
    print()
def print_each_months(year, offset, months = months, days = days, weekdays = weekdays):
    for month in range(12):
        print(f"\t\t\t{months[month]}\t{year}")
        for i in range(7):
            print(weekdays[i], end = "\t")
        print()
        day = 29 if is_run(year) and month == 1 else days[month]
        print_month(offset, day)
        offset = (offset + day) % 7

year = eval(input("请输入年份"))
temp = input("请输入第一天是周几（输入周的英文缩写，三个字母，首字母大写）")
assert temp in weekdays
offset = weekdays.index(temp)

print_each_months(year, offset)