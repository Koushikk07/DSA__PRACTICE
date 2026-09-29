dist = {}

while(True):
    key = input("Enter the key: ")
    if key=="": break
    value = input("Enter the value: ")
    dist.update({key:value})

print(dist)

find = input("what to find in List!");
print(dist.get(find))