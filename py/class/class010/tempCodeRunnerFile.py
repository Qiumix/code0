
    def button_click(self, value):
        current = self.display_var.get()
        if value == "=":
            try:
                result = eval(current)
                self.display_var.set(result)
            except:
                self.display_var.set("Error")
        else:
            self.display_var.set(current + value)