#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int num = x;
        int harshadNum = 0;

        while (num > 0)
        {
            harshadNum += num % 10;
            num = num / 10;
        }
        if (x % harshadNum == 0)
            return harshadNum;
        return -1;
    }
};