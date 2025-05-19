
filePath = 'Learn_Language/Python/File handling/Mark.txt'
file = open(filePath, 'r')
i  = 1
while True:
    line = file.readline()
    if not line:
        break
    # Right now ,m1,m2,m3 are string type
    m1 = line.split(",")[0]
    m2 = line.split(",")[1]
    m3 = line.split(",")[2]

    print (f"Student {i} marks in bangla : {m1}")
    print (f"Student {i} marks in english : {m2}")
    print (f"Student {i} marks in math : {m3}")
    i += 1
    print(m1 + m2 + m3)
    
    num = file.readline()
    if not num:
        break
    # Right now ,m1,m2,m3 are integer type by using type-cast
    m1 = int(num.split(",")[0])
    m2 = int(num.split(",")[1])
    m3 = int(num.split(",")[2])

    print (f"Student {i} marks in bangla : {m1}")
    print (f"Student {i} marks in english : {m2}")
    print (f"Student {i} marks in math : {m3}")
    i += 1
    print(m1 + m2 + m3)

