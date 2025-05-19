import random
import string

def random_digit(length):
    return ''.join(random.choices(string.digits, k=length))
length = int(input("Enter the length of the password: "))
print("Random Digit : " + random_digit(length))