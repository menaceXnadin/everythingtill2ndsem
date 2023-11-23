#! python3
import sys,pyperclip
# list example
# we will copy this text in the clipboard and add * and white space to every line as bullet
# eg:
# list of animals
# list of trees
# list of fruits
# list of mobile
# list of vehicles
text = pyperclip.paste()#now it copies from the clipboard
#now text contains string so lets spli it using split() method
lines = text.split('\n')#keep in mind that lines is a list
for i in range(len(lines)):
    lines[i]='* '+ lines[i]

text = '\n'.join(lines)
pyperclip.copy(text)
print(text)