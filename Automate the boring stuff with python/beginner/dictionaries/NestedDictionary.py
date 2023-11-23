allguests = {'ram':{'apple':4,'mango':3},
             'hari':{'apple':2,'orange':3},
             'shyam':{'orange':3,'peach':4}}
def totalbrought(guests,item):
 numbrought = 0
 for k,v in guests.items():
  numbrought = numbrought + v.get(item,0)
 return numbrought

print('Number of things being brought :')
print('apples - '+str(totalbrought(allguests,'apple')))
print('orange - '+str(totalbrought(allguests,'orange')))
print('peach - '+str(totalbrought(allguests,'peach')))
print('mango - '+str(totalbrought(allguests,'mango')))
