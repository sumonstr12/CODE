
# list
myList = [1, 'sumon', 3, "roy", 5]      # list can contain any type of data
print(myList)                           # in word i can use single quote or double quote
# iterate list
for i in myList:
    print(i)

# taking user input in list
n = 4
mylist = []
for i in range(n):
    mylist.append(int(input()))  # append() function is used to add element to the list

print(mylist)

# condition
if 'sumon' in myList:   # special operator 'in' is used to check the element is in the list or not
    print("Yes")
else:
    print("No")

# length of list
print(len(myList))  # using len() function we can find the length of the list

# add element to the list
myList.append("Hello")  # append() function is used to add element to the list
print(myList)

# insert element to the list
myList.insert(2, "World")  # insert( index, data) function is used to insert element to the list
print(myList)

# remove element from the list
myList.remove("Hello")  # remove() function is used to remove element from the list
print(myList)

# remove element by index
myList.pop(2)  # pop() function is used to remove element by index
print(myList)

# reverse the list
myList.reverse()  # reverse() function is used to reverse the list
print(myList)

# special case
my_list = ['hello', 'world', 'python']
reversed_strings = [s[::-2] for s in my_list]   # slicing is used to reverse the string s[start:stop:step]
print(reversed_strings)  # Output: ['olleh', 'dlrow', 'nohtyp']

# reverse() vs reversed()
# reverse() function is used to reverse the main list
# reversed() function is used to return the reverse iterator of the list that creates a new list
my_list = [2, 4, 3, 67, 5, 3]
reversed_list = list(reversed(my_list))
print(reversed_list)  # Output: [3, 5, 67, 3, 4, 2]
print(my_list)  # Output: [2, 4, 3, 67, 5, 3]
my_list.reverse()   # reverse() function is used to reverse the main list
print(my_list)  # Output: [3, 5, 67, 3, 4, 2]
# reversed() better than reverse() because it does not change the main list

# sort the list 
my_list = [2, 4, 3, 67, 5, 3]
sorted_list = sorted(my_list)  # sorted() function is used to sort the list
print(sorted_list)  # Output: [2, 3, 3, 4, 5, 67]
print(my_list)  # Output: [2, 4, 3, 67, 5, 3]
# sorted() better than sort() because it does not change the main list same as reversed()

# sort the list in descending order
my_list = [2, 4, 3, 67, 5, 3]
sorted_list = sorted(my_list, reverse=True)  # sorted() function is used to sort the list in descending order
print(sorted_list)  # Output: [67, 5, 4, 3, 3, 2]

# sort the string list
string = "sumon"
sort_string = sorted(string)  # sorted() function is used to sort the string
print(sort_string)  # Output: ['m', 'n', 'o', 's', 'u']
print(''.join(sort_string))  # Output: mnosu

# list with range
my_list = list(range(1,10))  # list() function is used to create a list with range by default start is 0
print(my_list)  # Output: [1, 2, 3, 4, 5, 6, 7, 8, 9] 
new_list = my_list[1:5]  # slicing is used to get the element from index 1 to 4
print(new_list)  # Output: [1, 2, 3, 4]

# print reverse list
rev_list = my_list[::-1]  # slicing is used to reverse the list
print(rev_list)  # Output: [9, 8, 7, 6, 5, 4, 3, 2, 1]

step_list = my_list[::2]  # slicing is used to get the element from index 1 to 9 with step 2
print(step_list)  # Output: [1, 3, 5, 7, 9]

# copy list
my_list = [2, 4, 3, 67, 5, 3]
new_list = my_list.copy()  # copy() function is used to copy the list
# or new_list = my_list[:]
# or new_list = list(my_list)
new_list.append(100)
print(my_list)  # Output: [2, 4, 3, 67, 5, 3]
print(new_list)  # Output: [2, 4, 3, 67, 5, 3, 100]

# list comprehension
my_list = [2, 4, 3, 5, 3]
new_list = [i*i for i in my_list]  # list comprehension is used to create a new list
print(my_list)  # Output: [2, 4, 3, 5, 3]
print(new_list)  # Output: [4, 16, 9, 25, 9]

# list comprehension with condition
my_list = [2, 4, 3, 5, 3]
new_list = [i*i for i in my_list if i%2==0]  # list comprehension with condition is used to create a new list
print(my_list)  # Output: [2, 4, 3, 5, 3]
print(new_list)  # Output: [4, 16]

# list comprehension with nested loop
my_list = [2, 4, 3, 5, 3]
new_list = [i*j for i in my_list for j in my_list]  # list comprehension with nested loop is used to create a new list
print(my_list)  # Output: [2, 4, 3, 5, 3]
print(new_list)  # Output: [4, 8, 6, 10, 6, 8, 16, 12, 20, 12, 9, 15, 9, 12, 15, 9, 25, 15, 12, 20, 15, 25, 15, 9]

# letter count
my_list = ['h', 'w', 'p','h']
count = my_list.count('h')  # count() function is used to count the element in the list
print(count)  # Output: 2

# index of element
my_list = ['h', 'w', 'p','h']
index = my_list.index('w')  # index() function is used to find the index of the element
print(index)  # Output: 1


# tuple
# tuple is immutable that means we can not change the element of the tuple
myTuple = (1, 'sumon', 3, "roy", 5)      # tuple can contain any type of data
print(myTuple)                           # in word i can use single quote or double quote

# tuple from list
myList = [1, 'sumon', 3, "roy", 5]
mytuple = tuple(myList)  # tuple() function is used to convert list to tuple

for i in mytuple:
    print(i)

# letter count same as list
# index of element same as list

# slicing tuple
myTuple = (1, 'sumon', 3, "roy", 5)
newTuple = myTuple[2:4]  # slicing is used to get the element from index 1 to 3
print(newTuple)  # Output: (3, 'roy')

# tuple unpacking
mytuple = "sumon",20,"Khulna"
name, age, city = mytuple  # tuple unpacking is used to assign the value to the variable
print("Name: ", name) # Output: Name:  sumon
print("Age: ", age)  # Output: Age:  20
print("City: ", city)   # Output: City:  Khulna

mytuple = (1, 2, 3, 4, 5)
a, *b, c = mytuple  # * is used to assign the remaining value to the variable
print(a)  # Output: 1
print(b)  # Output: [2, 3, 4]
print(c)  # Output: 5


