
# Constructor
class Student1:
    def __init__(self):
        print("Constructor called")

s1 = Student1()


# 1th example
class College:
    college_name = "kaunia college" # class attribute
    year = 1971

    def __init__(self,name,roll):
        self.name = name     # instance attribute/object attribute
        self.roll = roll

    def hello(self):
        print("Hello "+ self.name ,"welcome to kaunia college.")

s1 = College("sumon", 101)
print(s1.name)
s1.hello()

# Class have two things:
# Data(attributes) and Methods

# 2nd example

class Circle:
    pi = 3.1416

    def __init__(self,radious):
        self.radious = radious

    def area(self):
        return Circle.pi * self.radious ** 2
    
c1 = Circle(10)
print("Area of circle: ",round(c1.area(),2))


