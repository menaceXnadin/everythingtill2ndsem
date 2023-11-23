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
tabledata = [['apples', 'oranges', 'cherries', 'banana'],
             ['Alice', 'Bob', 'Carol', 'David'],
             ['dogs', 'cats', 'moose', 'goose',]]

def printTable(tabledata):
    # initialize the list "colWidths" with zeroes equal to the length of the input list
    colWidths = [0] * len(tabledata)

    # iterate over the input list to find the longest word in each inner list
    # if its larger than the current value, set it as the new value
    for i in range(len(tabledata)):
	    for j in range(len(tabledata[i])):
		    if len(tabledata[i][j]) > colWidths[i]:
			    colWidths[i] = len(tabledata[i][j])

    # assuming each inner list is the same length as the first, iterate over the tabledata
    # printing the x value from each inner list, right justifed to its corresponding value
    # in colWidths
    for x in range(len(tabledata[0])):
        for y in range(len(tabledata)):
            print(tabledata[y][x].rjust(colWidths[y]), end = ' ')
        print('')

printTable(tabledata)


