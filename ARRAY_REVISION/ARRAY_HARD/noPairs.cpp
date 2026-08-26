#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {

        int fq[101] = {0};
        for (int it : nums)
            fq[it]++;
        int cnt = 0;
        int leftover = 0;
        for (int i = 0; i < 101; i++)
        {
            if (fq[i] > 0)
            {
                cnt += fq[i] / 2;
                leftover += fq[i] % 2;
            }
        }

        return {cnt, leftover};
    }
};