# You are creating a fantasy video game. The data structure to model the
# player’s inventory will be a dictionary where the keys are string values
# describing the item in the inventory and the value is an integer value 
# detailing how many of that item the player has. For example, the dictionary value
# {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1, 'arrow': 12} means the
# player has 1 rope, 6 torches, 42 gold coins, and so on.
# Write a function named displayInventory() that would take any possible
# “inventory” and display it like the following:
inventory =  {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1, 'arrow': 12}
def displayinventory(inventory):
    numofitems = 0
    for k,v in inventory.items():
        
        print(k+' - '+str(v))
        numofitems = numofitems+v
    return numofitems


print('total no of items in the inventory is ',displayinventory(inventory))