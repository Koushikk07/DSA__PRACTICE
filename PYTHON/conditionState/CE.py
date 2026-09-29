marks = int(input("Enter the marks:"))

if marks >= 100:
    print("Entered Wrong marks")
elif marks > 80:
    print(f"A GRADE, marks: {marks}")
elif marks > 70:
    print(f"B GRADE, marks: {marks}")
elif marks > 60:
    print(f"C GRADE, marks: {marks}")
elif marks > 50:
    print(f"D GRADE, marks: {marks}")
elif marks > 40:
    print(f"E GRADE, marks: {marks}")
else:
    print("Sorry bro! Fail")
