
# min() function returns the smallest item in an iterable or the smallest of two or more arguments.
x = min(5, 10, 25)
print(x)  # Output: 5

# min() in strings
x = min("Orange")
print(x)  # Output: O

x = ["sumon", "apple", "banana"]
short = min(x, key = len)
print(short)  # Output: sumon
short = min(x)
print(short)  # Output: apple   when key is not given, it will return the smallest string in the list