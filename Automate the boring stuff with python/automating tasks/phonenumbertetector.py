# Let’s use a function named isPhoneNumber() to check whether a string
# matches this pattern, returning either True or False
def isphonenumber(text):
    if len(text)!= 12:
        return False
    for i in range(0,3):
        if not text[i].isdecimal():
            return False
    if text[3]!= '-':
        return False
    for i in range(4,7):
        if not  text[i].isdecimal():
            return False
    if text[7]!= '-':
        return False
    for i in range(8,12):
        if not text[i].isdecimal():
            return False
    else:
        return True
phonenumber = input('enter the phone number : ')
print(f"is {phonenumber} a valid american number?")#USE OF F STRING
print(isphonenumber(phonenumber))

