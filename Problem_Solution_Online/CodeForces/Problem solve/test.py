# PDF Password Cracker

import PyPDF2
import itertools
import string

def crack_pdf_password(pdf_file):
    # Create a PDF file reader object
    pdf_reader = PyPDF2.PdfReader(pdf_file)
    
    # Define the character set for the password
    characters = string.ascii_letters + string.digits + string.punctuation
    
    # Try all combinations of passwords
    for length in range(1, 6):  # Adjust the range for longer passwords
        for guess in itertools.product(characters, repeat=length):
            password = ''.join(guess)
            try:
                # Attempt to decrypt the PDF with the guessed password
                if pdf_reader.decrypt(password):
                    print(f"Password found: {password}")
                    return password
            except Exception as e:
                continue
    print("Password not found.")
    return None

# Example usage
pdf_file_path = 'sumon.pdf'
crack_pdf_password(pdf_file_path)
