num = int(input("Enter the number to get multiplication table: "))

print(f"Multiplication Table for {num} :")


def table(num):
    for i in range(1, 11):
        print(f"{num} * {i} = {num*i}")


table(num)
