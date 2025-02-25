from entry import Entry
import tkinter as tk

if __name__ == '__main__':
    app = tk.Tk()
    app.title("Entry App")
    app.geometry("400x400")
    Entry(app)
    app.mainloop()