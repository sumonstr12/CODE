
from tkinter import *

class Entry:
    def __init__(self, app):
        self.app = app
        self.entry = Entry(self.app, font=("Arial", 15))
        self.entry.pack(pady=20)
        self.button = Button(self.app, text="Click Me", font=("Arial", 15), command=self.get_text)
        self.button.pack(pady=10)
        self.label = Label(self.app, text="Hello", font=("Arial", 15))
        self.label.pack(pady=10)

    def get_text(self):
        text = self.entry.get()
        self.label.config(text=text)

    