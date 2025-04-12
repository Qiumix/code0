class test:

    def __init__(this, grade, num):
        this.grade = grade
        this.num = num

    def __add__(self, other):
        return self.grade + other.num

    def __call__(self, *args, **kwds):
        print(self.grade, self.num)


t1 = test(1, 10)
t2 = test(2, 30)
