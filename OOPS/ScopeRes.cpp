#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x = 10; // Global Declartion

// Define class function outside class
class Student
{
public:
    void show(); // function declared inside scope can be accessed by ::
};
void Student::show()
{
    cout << "Student function defined outside the class." << endl;
}

// access namespaces

namespace A
{
    int value = 5;
}
int main()
{
    int x = 20;
    cout << "It Return Normal: " << x << endl;
    cout << "Using Scope Res Operator: " << ::x << endl;
    Student s;
    s.show();
    cout << A::value << endl; // access value from namespace A
}