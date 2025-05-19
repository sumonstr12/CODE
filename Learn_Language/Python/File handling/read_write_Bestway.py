
filePath = 'Learn_Language/Python/File handling/Data_Best.txt'

with open(filePath,'w') as file:
    file.write(input('Enter text: '))

with open(filePath,'r') as file:
    content = file.read()
    print("Reading File : " + content)