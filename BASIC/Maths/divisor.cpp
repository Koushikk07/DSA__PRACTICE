#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_all_divisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
        if (n / i != i)
            cout << n / i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    print_all_divisors(n);
    return 0;
}