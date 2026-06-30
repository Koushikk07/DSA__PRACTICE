#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second == 2)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};