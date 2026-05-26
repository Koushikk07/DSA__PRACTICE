#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }
    return rev;
}
int mirrorDistance(int n)
{

    int rev = reverseNum(n);
    return abs(rev - n);
}

int main()
{
    // leetcode
}