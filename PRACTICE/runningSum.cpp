#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        int n = nums.size();
        int sum = 0;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};