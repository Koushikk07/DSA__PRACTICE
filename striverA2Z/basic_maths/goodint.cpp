#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkGoodInteger(int n)
{
    int sq = 0;
    int dg = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        dg += lastdigit;
        sq += lastdigit * lastdigit;
        n = n / 10;
    }

    if (sq - dg >= 50)
        return true;

    return false;
}