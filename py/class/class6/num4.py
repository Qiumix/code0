def display():
    ori_str = input("输入一个字符串:\n")
    len_ori = len(ori_str) 
    def fun(ori_str, temp_str, table):
        if len(temp_str) == len(ori_str):
            print(temp_str)
        else:
            for i in range(len(ori_str)):
                if table[i] == None: 
                    table[i] = True
                    fun(ori_str, temp_str + ori_str[i], table) 
                    table[i] = None  
    fun(ori_str, "", [None] * len_ori)

print("输入^Z退出")
while True:
    display()