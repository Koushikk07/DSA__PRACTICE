#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        int total = 0;
        int maxFreq = 0;
        unordered_map<int, int> mpp;
        for (auto it : nums)
        {
            mpp[it]++;
        }

        for (auto feq : mpp)
        {
            if (maxFreq < feq.second)
                maxFreq = feq.second;
        }

        for (auto feq : mpp)
        {
            if (feq.second == maxFreq)
                total += feq.second;
        }
        return total;
    }
};