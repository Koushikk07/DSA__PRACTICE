
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int mini = INT_MAX;
        for (auto it : nums)
        {
            mini = min(it, mini);
        }
        return mini;
    }
};

int main()
{
    // leetcode
}