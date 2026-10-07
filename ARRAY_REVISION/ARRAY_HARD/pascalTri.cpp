#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pascalrow(int n)
{
    int ans = 1;
    cout << ans << " ";
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }

    cout << endl;
}

void fullTgle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        pascalrow(i);
    }
}

int main()
{
    fullTgle(5);
}