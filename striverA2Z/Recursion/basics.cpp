#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// printing a name n th times
void func(int n)
{
    if (n == 0)
        return;
    cout << "Gudapur Koushik" << endl;
    func(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    func(n);
}