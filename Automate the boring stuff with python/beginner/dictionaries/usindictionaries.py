dict_1 = {'ram':'12','shyam':'14','hari':'34','color':'yellow'}
print(dict_1.keys())#to see the keys
print(dict_1.values())#to see the values
print(dict_1.items())#to see the both valued and keys
print(dict_1['ram'])
print(dict_1.setdefault('color','black'))
print(dict_1.get('color',0))
heeh=dict_1.setdefault('color','white')#value is not changed to white
print(dict_1.get('color',0))
print(heeh)