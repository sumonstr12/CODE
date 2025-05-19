
# Initiate Class
class Item:

    def calculate_total_price_1(self, x, y):    # Method(01)
        return x * y
    
    def calculate_total_price_2(self):    # Method(02)
        return self.price * self.quantity
    

class sumon:
    def __init__(self, x, y):
        self.name = x
        self.age = y
        
    def print_name(self):
        print(self.name)
        print(self.age)


# Jodi recieved arguments age thekei type fixed korte chai---> def __init__(self, x: str, y: int):
# like:
class typetest:
    rol = 1

    def __init__(self, x: str, y: int, z: float):
        # run validations to the recieved arguments
        assert y >= 0, "Age can't be negative"  # age negative hole error dekhabe and error message dekhabe
        assert z >= 0  # error message na dileo chole atai just error dekhabe
        self.name = x
        self.age = y
        self.roll = z

    def cal(self):
        self.roll = self.roll + 1
    def print_name(self):
        print(self.name)
        print(self.age)
        print(self.roll)

# Create an instance of the class
item1 = Item()
item1.name = "Apple"    # Attributes
item1.price = 1.99
item1.quantity = 10
# way to call a method (01)
print(item1.calculate_total_price_1(item1.price, item1.quantity))

item2 = Item()
item2.name = "Banana"
item2.price = 0.99
item2.quantity = 20
# way to call a method (02)
print(item2.calculate_total_price_2())


# Create an instance of the class
person1 = sumon("Sumon", 25)
person1.print_name()

# Create an instance of the class
person2 = typetest("Sumon", 25, 10) # type fixed tai jodi jodi thik vabe na dile error dekhabe

# print(typetest.__dict__)  # to see the attributes of the class
# print(person2.__dict__)  # to see the attributes of the instance
print(f"roll : {person2.roll}")  # to see the attributes of the instance






# discount calculation
class Item:
    dis_rate = 0.1
    def __init__(self, name: str, price: float, quantity = 0):
        self.name = name
        self.price = price
        self.quantity = quantity

        Item.all.append(self)
    
    def apply_discount(self):
        self.discount = self.price * self.dis_rate # Item.dis_rate dileo hobe
        # Item.dis_rate dile tkn seta always class level dis_rate ke call korbe
        # self.dis_rate dile object level dis_rate ke call korbe
        # tai best practice holo self.dis_rate use kora



item1 = Item("Apple", 10, 10)
item2 = Item("Banana", 20, 20)
item3 = Item("Orange", 30, 30)
item4 = Item("Mango", 40, 40)
item5 = Item("Pineapple", 50, 50)
# kono method er attribute ke call korar jonno method call korte hobe
# then attribute call korte hobe
item1.apply_discount() # 10 * 0.1 = 1
print(item1.discount)

item2.dis_rate = 0.2
item2.apply_discount() # 20 * 0.2 = 4
print(item2.discount)

for item in Item.all:
    print(item.name)