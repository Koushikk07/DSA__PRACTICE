#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func()
{
    // there is no base condition (leads to stack overflow / segmentation issue)
    cout << 52 << endl;
    func();
}

int main()
{
    func();
}