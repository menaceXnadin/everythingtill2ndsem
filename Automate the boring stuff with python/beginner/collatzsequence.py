# def collatz(number):
#     while number!=1:
#       if number%2==0:
#         a = number//2#normal integer division
#         print(a)
#         return a
#       else:
#         b = 3 * number + 1
#         print(b)
#         return b
# number = int(input("Enter the number : "))
# while True:
#     return_value = collatz(number)
#     number = return_value
#     if return_value ==1:
#         break

# def collatz(number): #other technique
#     while number!=1:
#       if number%2==0:
#         number = number//2#normal integer division
#         print(number)
#       else:
#         number = 3 * number + 1
#         print(number)
# number = int(input("Enter the number : "))

# collatz(number)


# using try and exception in same program
import sys
def collatz(number):
    while number!=1:
      if number%2==0:
        a = number//2#normal integer division
        print(a)
        return a
      else:
        b = 3 * number + 1
        print(b)
        return b
while True:
    try:
        number = int(input("Enter the number : "))
        break 
    except Exception as e:
        print('Error : ',str(e))
    

while True:
    return_value = collatz(number)
    number = return_value
    if return_value ==1:
        break
