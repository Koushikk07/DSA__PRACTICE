#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Pen
{
public: // public access modifier
    string color;
    string type;
    int cost;
    float tip; // data

    // methods
    void setPen(string color_1, string type_1, int cost_1, float tip_1)
    {
        color = color_1;
        type = type_1;
        cost = cost_1;
        tip = tip_1;
    }

    void printPen()
    {
        cout << "Pen_Color: " << color << endl;
        cout << "Pen_Type: " << type << endl;
        cout << "Pen_Cost: " << cost << endl;
        cout << "Pen_Tip: " << tip << endl;
    }
};

int main()
{
    Pen *p = new Pen();
    p->setPen("Olive", "RollerBall", 25, 0.7);
    p->setPen("Orange", "BallPoint", 10, 0.5); // returns
    p->printPen();
}

// Access Specifiers --public, private, protected