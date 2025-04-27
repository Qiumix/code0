class Account:
    __id: int
    __balance: float
    __annualInterestRate: float

    def __init__(self, id=0, balance=100, rate=0):
        self.__id = id
        self.__balance = balance
        self.__annualInterestRate = rate

    @property
    def id(self):
        return self.__id

    @id.setter
    def id(self, new_id):
        self.__id = new_id

    @property
    def balance(self):
        return self.__balance

    @balance.setter
    def balance(self, new_balance):
        self.__balance = new_balance

    @property
    def rate(self):
        return self.__annualInterestRate

    @rate.setter
    def rate(self, new_rate):
        self.__annualInterestRate = new_rate

    def getMonthlyInterestRate(self):
        return self.__annualInterestRate / 12

    def getMonthlyInterest(self):
        return self.getMonthlyInterestRate() / 100 * self.balance

    def withdraw(self, amount):
        if self.balance < amount:
            print("You don't have enough money to take.")
        else:
            self.balance -= amount
            print(f"Take:{amount}.")
            print(f"Remain:{self.balance}.")

    def desposit(self, amount):
        self.balance += amount
        print(f"Store {amount}.")
        print(f"Remain:{self.balance}.")


test = Account(1122, 20000, 4.5)
test.withdraw(2500)
test.desposit(3000)
print(f"id:{test.id}")
print(f"balance:{test.balance}")
print(f"monthlyInterestRate:{test.getMonthlyInterestRate()}")
print(f"monthlyInterest:{test.getMonthlyInterest()}")
