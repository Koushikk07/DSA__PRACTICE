#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumof(int n)

    {
        int sum = 0;
        while (n > 0)

        {
            int lastdigit = n % 10;
            sum += lastdigit;
            n = n / 10;
        }
        return sum;
    }
    int minElement(vector<int> &nums)
    {
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            mini = min(mini, sumof(nums[i]));
        }
        return mini;
    }
};

int main()
{
    // leetcode
}