from tkinter import *


class WidgetsDemo:

    def __init__(self, master):
        self.master = master
        master.title("Widgets Demo")

        self.frame = Frame(master, padx=10, pady=10)
        self.frame.pack()

        self.bold_var = BooleanVar()
        self.bold_var.trace_add("write", self.update_status)

        self.color_var = StringVar(value="red")
        self.color_var.trace_add("write", self.update_status)

        self.bold_check = Checkbutton(self.frame,
                                      text="Bold",
                                      variable=self.bold_var)
        self.bold_check.grid(row=0, column=0, padx=5, pady=5)

        self.red_radio = Radiobutton(self.frame,
                                     text="red",
                                     variable=self.color_var,
                                     value="red",
                                     bg="red")
        self.red_radio.grid(row=0, column=1, padx=5, pady=5)

        self.yellow_radio = Radiobutton(self.frame,
                                        text="yellow",
                                        variable=self.color_var,
                                        value="yellow",
                                        bg="yellow")
        self.yellow_radio.grid(row=0, column=2, padx=5, pady=5)

        self.status_label = Label(master, fg="blue")
        self.status_label.pack(pady=10)

        self.update_status()

    def update_status(self, *args):
        status_text = ""

        status_text += f"{self.color_var.get()} is selected\n"

        if self.bold_var.get():
            status_text += "check button is checked\n"
        else:
            status_text += "check button is unchecked\n"

        self.status_label.config(text=status_text)


def main():
    root = Tk()
    app = WidgetsDemo(root)
    root.mainloop()


if __name__ == "__main__":
    main()
