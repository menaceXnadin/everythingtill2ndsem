list = [] #declare an empty list
for i in range(5):
    list_input = input('enter the elements in the list : ')
    list = list + [list_input]

print(list)