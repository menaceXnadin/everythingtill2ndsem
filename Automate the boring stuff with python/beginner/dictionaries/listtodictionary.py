# Write a function named addToInventory(inventory, addedItems), where the
# inventory parameter is a dictionary representing the player’s inventory (like
# in the previous project) and the addedItems parameter is a list like dragonLoot.
# Dictionaries and Structuring Data 121
# The addToInventory() function should return a dictionary that represents the
# updated inventory. 
# Note that the addedItems list can contain multiples of the
# same item
inventory =  {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1, 'arrow': 12}
dragonloot = ['rope','gold coin','torch','rope','gold coin','torch','hammer']
def addtoinventory(inventory,addeditems):
   for i in addeditems:
         if i in inventory:
            inventory[i]=inventory[i]+1
         else:
            inventory.setdefault(i,1)
          

def displayinventory(inventory):
    numofitems = 0
    for k,v in inventory.items():
        
        print(k+' - '+str(v))
        numofitems = numofitems+v
    return numofitems

addtoinventory(inventory,dragonloot)
displayinventory(inventory)
