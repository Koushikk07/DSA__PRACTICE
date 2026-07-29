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

// printing 1 to N times

void printNum(int i, int n)
{
    if (i == n + 1)
        return;
    cout << i << endl;
    printNum(i + 1, n);
}

// print N to 1
void printN(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    printN(n - 1);
}

// backtracking -- 1 to N

void print1toN(int i, int n)
{
    if (i == n)
        return;
    print1toN(i + 1, n);
    cout << i + 1 << endl;
}

void printNto1(int n)
{
    if (n == 0)
        return;
    printNto1(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    // func(n);
    // printNum(1, n);
    // printN(n);
    // print1toN(0, n);
    printNto1(n);
}