s= set()
s.add(1)
s.add(2)
s.add(3)
s.add(4)
s.add(5)  #Set ia a collection of non-repetive elements
s.add(5)
s.add(5)
s.add(5)
s.add(6)
print(s)


""" 
1. sets are unordered
2. sets are unindexed
3. There is no way to change items in sets
4. Sets cannot contain duplicate values

"""

print("Sets Operations...\n")
print(len(s))
print(s.remove(2))
print("after removing")
print(s)
print(s.pop())
print(s.union({1,8}))
print(s.intersection({1,8}))