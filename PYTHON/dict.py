a={
    "key":"value",
    "harry":"code",
    "marks":"100",
    "list":[1,2,9]
}

print(a["key"])
print(a["list"])

"""
1. it is unordered
2. it is mutable
3. it is indexed
4. cannot contain duplicate keys

"""

print("Dictionary Methods")

print(a.items())
print(a.keys())
a.update({"friends":["ram","aditya","narendar","sampath","yash"]})
print(a.items())
print(a.get("harry"))

