class Usr:

    def login(self):
        print("登录次数仅三次   ")
        self.inc_login_attempt()
        print(f"登录次数{self.__login_attempt}")

    def inc_login_attempt(self):
        self.__login_attempt += 1

    def reset_login_attempt(self):
        self.__login_attempt = 0
        print("重置次数")
        print(f"登录次数{self.__login_attempt}")

    def __init__(self, name, first, last, email, address, login_time):
        self.first_name, self.last_name = first, last
        self.email = email + "@example.com"
        self.address = address
        self.name = name
        self.__login_attempt = login_time

    def describe_usr(self):
        print(f"用户真实姓名:{self.first_name}{self.last_name}")
        print(f"用户名:{self.name}")
        print(f"Email:{self.email}")
        print(f"Address:{self.address}")
        self.inc_login_attempt()
        self.greet()

    def greet(self):
        self.inc_login_attempt()
        print(f"Welcome back, {self.name}")
        print()


class Privilege:
    privilege = ["重置密码", "评论", "暂停其他用户", "修改其他用户信息"]

    def show_privilege(self):
        print("管理员权限")
        for i in self.privilege:
            print(i)


class Admin(Usr):
    have_pri = False

    def show_privilege(self):
        if not self.have_pri:
            print("管理员权限")
            print("这个用户没有超级用户权限")
            print("增加管理员权限")
            self.pri = Privilege()
            self.have_pri = True
        else:
            self.pri.show_privilege()


usr_1 = Admin("e_matthes", "Eric", "Matthes", "E_matthes", "Xiamen", 0)
usr_1.describe_usr()
usr_1.show_privilege()
usr_1.show_privilege()

#
#
#

# usr_2 = Usr("will", "Willie", "Burger", "wb", "Alaska")
# usr_1.login()
# usr_1.reset_login_attempt()
