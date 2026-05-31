#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;

        int n = nums.size();
        for (auto it : nums)
        {
            string str = to_string(it);

            for (auto st : str)
            {
                ans.push_back(st - '0');
            }
        }
        return ans;
    }
};

int main()
{
    // leetcode
}