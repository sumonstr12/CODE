
# Dictionary
# create and assign dictionary
myDict = {'name':'sumon', 'age':20, 'city':'Khulna'}  # dictionary is created using curly braces
print(myDict)  # Output: {'name': 'sumon', 'age': 20, 'city': 'Khulna'}

mydict = dict(name='sumon', age=20, city='Khulna')  # dictionary is created using dict() function
print(mydict)  # Output: {'name': 'sumon', 'age': 20, 'city': 'Khulna'}

# access dictionary
name = myDict['name']  # access the value of the key 'name'
print(name)  # Output: sumon

# add element to dictionary
myDict["love"] = "Tithy"  # add the key 'love' with value 'Tithy'
print(myDict)  # Output: {'name': 'sumon', 'age': 20, 'city': 'Khulna', 'love': 'Tithy'}

# change the value of the key
myDict['age'] = 21  # change the value of the key 'age'
print(myDict['age'])  # Output: 21

# delete the element of the dictionary
del myDict['age']  # delete the key 'age' with value
print(myDict)  # Output: {'name': 'sumon', 'city': 'Khulna', 'love': 'Tithy'}

# Use pop() when you want to remove a specific key.
# Use popitem() when you need to remove the last (or most recently inserted) item.
# Use clear() when you want to clear all the items in the dictionary.
myDict.pop('name')  # remove the key 'name' with value
print(myDict)  # Output: {'city': 'Khulna', 'love': 'Tithy'}

myDict.popitem()  # remove the last item
print(myDict)  # Output: {'city': 'Khulna'}

myDict['age','love','name'] = 20, 'Tithy', 'Sumon'  # add multiple key with value
print(myDict)  # Output: {'city': 'Khulna', ('age', 'love', 'name'): (20, 'Tithy', 'Sumon')}

# loop through dictionary(print key)
for key in myDict.keys():
    print(key)  # Output: city, ('age', 'love', 'name')

# loop through dictionary(print value)
for value in myDict.values():
    print(value)  # Output: Khulna, (20, 'Tithy', 'Sumon')

# loop through dictionary(print key and value)
for key, value in myDict.items():
    print(key, value)  # Output: city Khulna, ('age', 'love', 'name') (20, 'Tithy', 'Sumon')


mydict = {2:4, 3:9, 4:16, 5:25}
print(mydict)  # Output: {2: 4, 3: 9, 4: 16, 5: 25}

print(mydict[3])  # Output: 9 # access the value of the key 3 [ mydict[key] ]

# sets : unordered,mutalbe, no duplicate
myset = {1, 2, 3, 4, 5, 6, 7, 8, 9}  # set is created using curly braces
print(myset)  # Output: {1, 2, 3, 4, 5, 6, 7, 8, 9}

myset = set([1, 2, 3, 4, 5, 6, 7, 8, 9])  # set is created using set() function with list
print(myset)  # Output: {1, 2, 3, 4, 5, 6, 7, 8, 9}

myset = set("sumon")  # set is created using set() function with string
print(myset)  # Output: {'s', 'u', 'm', 'o', 'n'}

myset = set()  # empty set

# add element to set
for i in range(1, 6):
    myset.add(i)  # add the element to the set

print(myset)  # Output: {1, 2, 3, 4, 5}

# remove element from set
myset.remove(3)  # remove the element 3 from the set
print(myset)  # Output: {1, 2, 4, 5}
myset.remove(6)  # KeyError: 6
# remove() method raises KeyError if the element is not present in the set.
# To avoid this, you can use the discard() method.
myset.discard(6)  # no error
print(myset)  # Output: {1, 2, 4, 5}

# clear the set
myset.clear()  # clear the set
print(myset)  # Output: set() empty set

# union of set
even = {2, 4, 6, 8, 10}
odd = {1, 3, 5, 7, 9}
prime = {2, 3, 5, 7}
u = even.union(odd)  # union() method is used to get the union of two sets
print(u)  # Output: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
i = even.intersection(prime)  # intersection() method is used to get the intersection of two sets
print(i)  # Output: {2}

# difference of set
d = even.difference(odd)  # difference() method is used to get the difference of two sets
print(d)  # Output: {8, 10}

# symmetric difference of set
s = even.symmetric_difference(odd)  # symmetric_difference() method is used to get the symmetric difference of two sets
print(s)  # Output: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

# subset and superset
print(even.issubset(u))  # Output: True
print(even.issuperset(u))  # Output: False

# frozen set : immutable set
fset = frozenset([1, 2, 3, 4, 5])  # frozen set is created using frozenset() function
print(fset)  # Output: frozenset({1, 2, 3, 4, 5})
# fset.add(6)  # AttributeError: 'frozenset' object has no attribute 'add'



