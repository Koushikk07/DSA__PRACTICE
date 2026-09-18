#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
-> Create new memory and copies the actual value
-> Both objects are independent
-> Modify one obj cannot affect other

*/

class student
{

public:
    int *marks;

    student(int m)
    {
        marks = new int(m);
    }
    // deep copy
    student(const student &s)
    {
        marks = new int(*(s.marks)); // allocates and copies value
    }

    void show()
    {
        cout << "Marks: " << *marks << endl;
    }
};

int main()
{
    student s1(90);
    student s2 = s1;
    *s2.marks = 50;
    s1.show();
    s2.show();
}