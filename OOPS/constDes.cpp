#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// constructor
/*
Special method which is invoked automatically (only called once)
*/

class Student
{
public:
    string name;
    Student()
    {
        cout << "Non-Parametersed/Default Constuct" << endl;
    }

    Student(string n)
    {
        name = n;
    }

    // copy
    Student(const Student &s)
    {
        name = s.name;
    }

    ~Student()
    {
        cout << "Deconstructor Called" << endl;
    }
};

int main()
{
    Student *s = new Student(" Gudapur Koushik");
    cout << "Student Name: " << s->name;
}