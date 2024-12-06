# I/O in python

# In this method,must have to use close() method to close the file after reading or writing
# writing from a file
f = open('S:\CODE\Learn_Language\Python\File handling\Data.txt', 'w')
f.write(input('Enter text: '))
f.close()

# we can fixed file path like this
file_path = 'S:\CODE\Learn_Language\Python\File handling\Data.txt'
# raeding to a file
f = open(file_path, 'r')
file = int(f.read())
print("Reading from file: ", file*2)
f.close()

