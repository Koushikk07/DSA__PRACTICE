#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {

        int total = 0;

        for (auto num : nums)
        {
            int cnt = 0;
            while (num > 0)
            {
                cnt++;
                num = num / 10;
            }
            if (cnt % 2 == 0)
                total += 1;
        }
        return total;
    }
};