marks = []
sum=0
while(True):
    mark = int(input("Enter the marks:"))
    if mark==0: break
    sum+=mark
    marks.append(mark)
print(marks)
print("Total Marks: ",sum)