weight = eval(input("以磅为单位的输入重量:"))
height = eval(input("输入身高(英尺):"))
print("BMI is {:.2f}".format((weight * \
  0.45359237) / ((height * 0.0254)) ** 2))
