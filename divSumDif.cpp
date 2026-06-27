#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int dev = 0;
        int ndev = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
            {
                dev += i;
            }
            else
            {
                ndev += i;
            }
        }
        return ndev - dev;
    }
};