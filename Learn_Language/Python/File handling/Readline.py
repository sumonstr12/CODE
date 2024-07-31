
# readline() method is used to read a single line from the file.
# It reads the text up to the newline character and returns the line.
# If the size parameter is specified, then it reads the text up to the size specified.
# If the end of the file is reached, then it returns an empty string.
# Syntax:

filePath = 'Learn_Language/Python/File handling/Data.txt'
f = open(filePath, 'r')
while f:
    line = f.readline()
    if not line:
        break
    print(line)

