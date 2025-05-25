from tkinter import *

windows = Tk()
button_frame = Frame(windows)
button_frame.pack(side=TOP, fill=X)
juXing = Button(button_frame, text="矩形", width=8)
juXing.pack(side=LEFT)

circle = Button(button_frame, text="圆形", width=8)
circle.pack(side=LEFT)

tuoYuan = Button(button_frame, text="椭圆", width=8)
tuoYuan.pack(side=LEFT)

duoBianXing = Button(button_frame, text="多边形", width=8)
duoBianXing.pack(side=LEFT)

line_btn = Button(button_frame, text="线条", width=8)
line_btn.pack(side=LEFT)

text_btn = Button(button_frame, text="文字框", width=8)
text_btn.pack(side=LEFT)


def print_button(shape):
    print(f"这是一个{shape}")


juXing.config(command=lambda: print_button("矩形按钮"))
circle.config(command=lambda: print_button("圆形按钮"))
tuoYuan.config(command=lambda: print_button("椭圆按钮"))
duoBianXing.config(command=lambda: print_button("多边形按钮"))
line_btn.config(command=lambda: print_button("线条按钮"))
text_btn.config(command=lambda: print_button("字符串按钮"))

windows.mainloop()
