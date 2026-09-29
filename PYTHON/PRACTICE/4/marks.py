marks = []
while(True):
    mark = int(input("Enter the marks:"))
    if mark==0: break
    marks.append(mark)

print(marks.sort())