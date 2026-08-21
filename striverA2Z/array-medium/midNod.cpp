#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {

        unordered_map<int, int> mpp;
        for (auto it : edges)
        {
            for (auto pt : it)
            {
                mpp[pt]++;
            }
        }

        for (auto it : mpp)
        {
            if (it.second == edges.size())
                return it.first;
        }

        return -1;
    }
};