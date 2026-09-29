num1 = int(input("Enter the num1: "))
num2 = int(input("Enter the num2: "))
num3 = int(input("Enter the num3: "))
num4 = int(input("Enter the num4: "))

if (num1 > num2 and num1 > num3 and num1 > num4):
    print("Greater: ", num1)
elif (num2 > num1 and num2 > num3 and num2 > num4):
    print("Greater: ", num2)
elif (num3 > num1 and num3 > num2 and num3 > num4):
    print("Greater: ", num3)
else:
    print("Greater: ", num4)
