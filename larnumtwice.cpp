#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int lar = 0;
        int slar = -1;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[lar])
            {
                slar = lar;
                lar = i;
            }
            else if (slar == -1 || nums[i] > nums[slar])
            {
                slar = i;
            }
        }
        if (nums[slar] * 2 <= nums[lar])
        {
            return lar;
        }
        return -1;
    }
};