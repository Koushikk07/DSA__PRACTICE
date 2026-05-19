#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{

    unordered_map<int, int> mpp;
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > (n / 3))
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main()
{
    // Practiced in leetcode
}