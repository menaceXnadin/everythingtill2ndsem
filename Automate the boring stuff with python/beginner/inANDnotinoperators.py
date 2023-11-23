#this program takes input from user and checks if its in the list or not
list = ['cat','bat','ram','10','nepal','ramen']
name = input("enter the element you want to check in the list : ")
if name not in list :
    print(f'{name} is not in the list')
else:
    print(f'{name} is in the list')