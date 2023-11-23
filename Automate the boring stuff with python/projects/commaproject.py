# Say you have a list value like this:
# spam = ['apples', 'bananas', 'tofu', 'cats']
# Write a function that takes a list value as an argument and returns
# a string with all the items separated by a comma and a space, with and
# inserted before the last item. For example, passing the previous spam list to
# the function would return 'apples, bananas, tofu, and cats'. But your function should be able to work with any list value passed to it.
def comma(receive_arg):
    my_str = ''
    for i in range(len(receive_arg)):
       if i!=(len(receive_arg)-2) and i!=(len(receive_arg)-1):
           my_str = my_str+receive_arg[i]+','
       elif i==(len(receive_arg)-2):
           my_str = my_str+receive_arg[i]+' and '
       else:
            my_str = my_str+receive_arg[i]
    return my_str



list1 = []
num  = int(input('enter the size of list : '))
for i in range(num):
    name = input("Enter the elements : ")
    list1.append(name)  
result = comma(list1)
print(result)
