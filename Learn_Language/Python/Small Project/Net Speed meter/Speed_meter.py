
from speedtest import Speedtest
import tkinter as tk
import threading

class NetworkSpeedApp:
    def __init__(self, app):
        self.app = app
        tk.Label(app, text="Internet Speed Meter", font=("Arial", 20)).pack(pady=20)
        self.test_button = tk.Button(app, text="Test Speed", font=("Arial", 15), command=self.test_speed)
        self.test_button.pack(pady=10)
        self.download_label = tk.Label(app, text="Download Speed : ", font=("Arial", 15))
        self.download_label.pack(pady=10)
        self.upload_label = tk.Label(app, text="Upload Speed : ", font=("Arial", 15))
        self.upload_label.pack(pady=10)
        self.ping_label = tk.Label(app, text="Ping : ", font=("Arial", 15))
        self.ping_label.pack(pady=10)

    def test_speed(self):
        speed = Speedtest(secure=True)
        down_load = speed.download() / 1000000
        up_load = speed.upload() / 1000000
        ping = speed.results.ping

        # Update the labels
        self.download_label.config(text=f"Download Speed : {down_load:.2f} Mbps")
        self.upload_label.config(text=f"Upload Speed : {up_load:.2f} Mbps")
        self.ping_label.config(text=f"Ping : {ping} ms")