#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {

        int n = nums.size();
        int cnt = 0;
        int i = 0;
        int preSum = 0;
        while (i < n - 1)
        {
            preSum += nums[i];
            int psm = 0;
            for (int j = i + 1; j < n; j++)
            {
                psm += nums[j];
            }
            if (abs(preSum - psm) % 2 == 0)
                cnt++;
            i++;
        }

        return cnt;
    }
};