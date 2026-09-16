#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minCosts(vector<int> &cost)
    {

        int min = cost[0];
        int n = cost.size();
        for (int i = 1; i < n; i++)
        {
            if (cost[i] >= min)
            {
                cost[i] = min;
            }
            else
            {
                min = cost[i];
            }
        }
        return cost;
    }
};