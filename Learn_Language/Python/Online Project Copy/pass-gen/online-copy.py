import random
import string

def generate_password(length=12, use_special_chars=True):
    characters = string.ascii_letters + string.digits
    if use_special_chars:
        characters += string.punctuation

    password = ''.join(random.choice(characters) for _ in range(length))
    return password

# Example usage
password_length = int(input("Enter the length of the password: "))
include_special_chars = input("Include special characters? (yes/no): ").strip().lower() == 'yes'

generated_password = generate_password(password_length, include_special_chars)
print(f"Generated password: {generated_password}")
