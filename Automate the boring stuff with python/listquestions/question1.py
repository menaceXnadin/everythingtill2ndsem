# How would you assign the value 'hello' as the third value in a list stored
# in a variable named spam? (Assume spam contains [2, 4, 6, 8, 10].)
mylist = [2,4,6,8,10]
mylist.insert(2,'hello')
print(mylist[:2])
mylist.remove(4)
mylist.append(5)
print(mylist)
