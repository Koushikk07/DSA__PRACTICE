dist = {}

while(True):
    key = input("Enter the name: ")
    if key=="": break
    value = input(f"Enter the fav lang of {key}: ")
    dist.update({key:value})

print(dist)