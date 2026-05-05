#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// two approach for finding the HCF / GCD

int hcf_gcd(int n, int m)
{
    int len = min(n, m);
    int gcd = 0;
    for (int i = 1; i * i <= len; i++)
    {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    return gcd;
}

int euclidean_alg(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
}
int main()
{
    int n, m;
    cout << "enter the value of n:";
    cin >> n;
    cout << "enter the value of m:";
    cin >> m;
    // cout << "Greater Common Facter of " << n << " &  " << m << " :" << hcf_gcd(n, m);
    cout << "Greater Common Facter of " << n << " &  " << m << " :" << euclidean_alg(n, m);
    return 0;
}