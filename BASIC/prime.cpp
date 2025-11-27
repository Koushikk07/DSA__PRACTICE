#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    bool isprime = true;

    if (n <= 1)
        isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isprime = false;
    }
    if (isprime)
        cout << "prime";
    else
        cout << "not prime";
}