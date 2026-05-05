#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
                cnt++;
        }
    }
    cout << boolalpha;
    if (cnt == 2)
    {
        return true;
    }

    return false;
}
int main()

{
    int n;
    cout << "enter the number:";
    cin >> n;
    cout << "given number is prime! " << check_prime(n);
}