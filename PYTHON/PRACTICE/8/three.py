def Greatest(a, b, c):
    if (a > b and a > c):
        return a
    elif (b > a and b > c):
        return b
    else:
        return c


num1 = int(input("Enter the num1: "))
num2 = int(input("Enter the num2: "))
num3 = int(input("Enter the num3: "))

print(
    f"Greatest among {num1}, {num2} and {num3} is {Greatest(num1, num2, num3)}")
