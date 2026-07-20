#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        for (int i = 0; i < nums.size(); i++)
        {
            if (first.find(nums[i]) == first.end())
                first[nums[i]] = i;

            last[nums[i]] = i;
            freq[nums[i]]++;
        }

        int degree = 0;
        for (auto x : freq)
            degree = max(degree, x.second);

        int ans = nums.size();

        for (auto x : freq)
        {
            if (x.second == degree)
            {
                ans = min(ans, last[x.first] - first[x.first] + 1);
            }
        }

        return ans;
    }
};