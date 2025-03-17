def equation():

	a, b, c = eval(input("Enter a, b, c: "))
	delta = b * b - 4 * a * c
	if delta == 0:
		print("The root is {:.0f}".format(b / (-2 * a)))
	elif delta < 0:
		print("The equation has no roots")
	elif delta > 0:
		print("The roots are {:.5f} and {:.5f}".format \
			((-b - delta ** 0.5) / (2 * a), (-b + delta ** 0.5) / (2 * a)))
for i in range(1, 4):
	equation()