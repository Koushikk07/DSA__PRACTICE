#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name; // attribute or data of a class

    Student(string name) //-> here, its a param with same variable name;
    {
        this->name = name; // this.name->refers to class attribute
    }
    void GetStudent()
    {
        cout << "Student Name: " << name;
    }
};

int main()
{
    Student *s1 = new Student("Gudapur Koushik");
    s1->GetStudent();
    return 0;
}