import random
import string

def password_generator():
    length = int(input("Enter the length of the password : "))
    password = ''.join(random.choices(string.ascii_letters + string.digits + string.punctuation , k = length))
    print(password)

password_generator()
