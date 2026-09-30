fac = 1

num = int(input("Enter the Number: "))

for i in range(1, num+1):
    fac *= i

print(f"Factorical of {num}: {fac}")
