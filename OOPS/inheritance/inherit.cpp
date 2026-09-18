#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 one class inherits properties and behaviour from another (parent & child)

 --> promotes code reuse and hierarchical structure.




*/

class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle Started" << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is Driving!" << endl;
    }
};

int main()
{
    Car tata;
    tata.start();
    tata.drive();
    return 0;
}
