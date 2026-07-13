#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDegrees(vector<vector<int>> &matrix)
    {

        vector<int> ans;

        for (auto it : matrix)
        {
            int deg = 0;
            for (auto d : it)
            {
                if (d != 0)
                {
                    deg++;
                }
            }
            ans.push_back(deg);
        }
        return ans;
    }
};