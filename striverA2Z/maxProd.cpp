#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int x = nums[0] * nums[1];
        int y = nums[nums.size() - 1] * nums[nums.size() - 2];
        return y - x;
    }
};