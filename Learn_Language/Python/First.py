
"""
This is a simple Python program that prints "Hello, world!" to the console.
"""

# Single-line comment
print("Hello, world!")

# variable declaration
x = 5
y = "John"
z = 5.0
print(x + z)

# Convert float to int
result = int(x + z)
print(result)
# Declare a variable with casting
a = int(1)
b = int(2.8)
c = int("3")    # Casting means specify the data type of a variable.

print(a, b, c)

# Declare a variable and combine it with a string
name = "John"
print("Hello, " + name)
#alternative way
print("hello,", name)   #in this way ,a single spsce is added automatically between hello and name


fruits = ["apple", "banana", "cherry"]
x, y, z = fruits

print(x)
print(y)
print(z)

# Assign multiple values to multiple variables
a, b, c = 1, "Sumon", 3
print(a)
print(b)
print(c)

# Global variable
x = "awesome"
print("Python is " + x)

# Global variable inside a function
def myfunc():   #function declaration
    print("Python is " + x + ".(inside a function)")

myfunc()


p = int(input("Enter a number: "))
q = int(input("Enter another number: "))
print(p + q)

# multiple string
r = """Lorem ipsum dolor sit amet,"""
print(r)


# Convert string to lowercase
string = "HELLO, WORLD!"
lowercase_string = string.lower()
print(lowercase_string)

# Convert string to uppercase
string = "hello, world!"
uppercase_string = string.upper()
print(uppercase_string)

# Replace a character
string = "Hello, world!"
new_string = string.replace("o", "e")
print(new_string)

