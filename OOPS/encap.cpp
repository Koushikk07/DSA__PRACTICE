#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Encapsulation -- wrapping the data and methods into a single unit -- we can directly access (access to prt. method or constructors)

// data hiding  {protection layer}

class Student
{
private:
    string rollNo; // a friend can access it
public:
    string name;
    int age;

    void setStudent(string name_1, string rollno, int age_1)
    {
        if (rollno.size() < 8)
        {
            name = name_1;
            rollNo = "Entered In Wrong Format ! typed: " + rollno;
            age = age_1;
        }
        else
        {
            name = name_1;
            rollNo = rollno;
            age = age_1;
        }
    }

    void getStudent()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    // it throws error s1.rollNo="4511-22-733-52";
    // s1.setStudent("Gudapur Koushik", "4511-22-733-052", 22); // its works!
    s1.setStudent("Gudapur Koushik", "052", 22);

    s1.getStudent();
    return 0;
}