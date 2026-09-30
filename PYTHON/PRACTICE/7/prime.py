num = int(input("Enter the Number: "))

if num < 2:
    print("Not a Prime Number")
else:
    flag = True

    for i in range(2, num):
        if num % i == 0:
            flag = False
            break

    if flag:
        print("Not a Prime Number")
    else:
        print("Its a Prime Number")
