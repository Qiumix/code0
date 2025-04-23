class Person:

    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    def set_name(self, name):
        try:
            if name == '':
                raise ValueError
            self.__name = name
            print(f"Update Name:{self.get_name()}")
        except ValueError:
            print("ERROR: Name cann't be empty.")

    def set_age(self, age):
        try:
            if age < 0 or age > 120:
                raise ValueError
            self.__age = age
            print(f"Update Age:{self.get_age()}")
        except ValueError:
            print("ERROR: Age must between 0 and 120.")

    def get_name(self):
        return self.__name

    def get_age(self):
        return self.__age


test = Person("Alice", 25)
print(f"Name: {test.get_name()}")
print(f"Age: {test.get_age()}")
test.set_name("Bob")
test.set_age(30)
test.set_name("")
test.set_age(-1)
