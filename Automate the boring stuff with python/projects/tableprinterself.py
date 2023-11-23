# Write a function named printTable() that takes a list of lists of strings
# and displays it in a well-organized table with each column right-justified.
# Assume that all the inner lists will contain the same number of strings.
# For example, the value could look like this:
# tableData = [['apples', 'oranges', 'cherries', 'banana'],
#  ['Alice', 'Bob', 'Carol', 'David'],
#  ['dogs', 'cats', 'moose', 'goose']]
# Your printTable() function would print the following:
#  apples Alice dogs
#  oranges Bob cats
#  cherries Carol moose
#  banana David goose
tabledata = [['apples', 'oranges', 'cherries', 'banana'],#list
             ['Alice', 'Bob', 'Carol', 'David'],
             ['dogs', 'cats', 'moose', 'goose']]

def printtable(tabledata):
    colwidth = [0]*len(tabledata)#row = innerlist   colwidth = [0,0,0]-list of integers
     
    for i in range(len(tabledata)):
        for j in range(len(tabledata[i])):
            if len(tabledata[i][j])>colwidth[i]:
                colwidth[i]= len(tabledata[i][j])
    
    for i in range(len(tabledata[0])):
        for j in range(len(tabledata)):
            print(tabledata[j][i].rjust(colwidth[j]),end =  ' ')
        print()

printtable(tabledata)