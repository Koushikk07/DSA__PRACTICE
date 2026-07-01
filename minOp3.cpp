#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {

        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if ((nums[i] - 1) % 3 == 0 || (nums[i] + 1) % 3 == 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};