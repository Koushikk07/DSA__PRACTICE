#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {

        int P = 1;
        int S = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            P *= last_digit;
            S += last_digit;
            n = n / 10;
        }
        return P - S;
    }
};