#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDigits(int num)
    {
        int cnt = 0;
        int n = num;
        while (n > 0)
        {
            int last_digit = n % 10;
            if (num % last_digit == 0)
                cnt++;

            n = n / 10;
        }
        return cnt;
    }
};
