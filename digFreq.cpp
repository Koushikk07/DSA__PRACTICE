#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int digitFrequencyScore(int n)
    {

        unordered_map<int, int> mpp;

        while (n > 0)
        {
            int lastdigit = n % 10;
            mpp[lastdigit]++;
            n = n / 10;
        }

        int sum = 0;
        for (auto it : mpp)
        {
            sum += it.first * it.second;
        }
        return sum;
    }
};