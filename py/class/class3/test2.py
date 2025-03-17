from math import *
r = eval(input("输入从中心到顶点的距离："))
area = 5 * r * r * sin(pi / 2.5) / 2
print("面积是{:.2f}".format(area))
def add(a):
  """
  >>> adder3 = add(3)
  >>> adder3(3)
  6
  """
  def adder(b):
    return a + b
  return adder