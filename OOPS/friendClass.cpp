#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// scenario that we cant share engine no to anyone except mechanic for serving the car.

class Car
{
private:
    string EngNo;

public:
    Car()
    {
        EngNo = "XYZ5867186";
    }

    // declaring mechanic as a friend class

    friend class Mechanic;
};

class Mechanic
{
public:
    void checkEngNo(Car c)
    {
        cout << "Engine Number of Car: " << c.EngNo << endl;
    }
};
int main()
{
    Car myCar;
    Mechanic m;
    m.checkEngNo(myCar);
    return 0;
}