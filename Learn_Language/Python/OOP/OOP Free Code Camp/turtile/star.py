import turtle

# Set up the screen
screen = turtle.Screen()
screen.bgcolor("black")
screen.title("Colorful Spiral")

# Create a turtle object
spiral = turtle.Turtle()
spiral.speed(0)  # Fastest speed

# List of colors to cycle through
colors = ["red", "blue", "green", "yellow", "purple", "orange"]

# Draw a spiral
for i in range(10):
    spiral.color(colors[i % len(colors)])  # Change color for each iteration
    spiral.forward(i * 5)  # Move forward
    spiral.right(45)       # Turn right
    spiral.width(i // 10 + 1)  # Increase the pen width as it spirals

# Keep the window open until clicked
screen.mainloop()
