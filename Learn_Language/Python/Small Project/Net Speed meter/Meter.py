

import tkinter as tk
from Speed_meter import NetworkSpeedApp

if __name__ == "__main__":
    app = tk.Tk()
    app.title("Network Speed App")
    app.geometry("400x400")
    NetworkSpeedApp(app)
    app.mainloop()
