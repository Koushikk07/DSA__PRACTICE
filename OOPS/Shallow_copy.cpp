#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Shallow copy-- copies the referance address of dynamic members
//  both objects share the same memory
//  changing one data in object affects the other.

class Student
{
public:
    int *marks;
    Student(int m)
    {
        marks = new int(m);
    }

    // shallow copy
    Student(const Student &s)
    {
        marks = s.marks;
    }

    void show()
    {
        cout << "Marks: " << *marks << endl;
    }
};

int main()
{
    Student s1(90);
    s1.show();
    Student s2 = s1;
    *s2.marks = 50; // changes to 50 *address.
    s1.show();
}