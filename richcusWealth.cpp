#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {

        int maxi = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (auto it : accounts[i])
            {
                sum += it;
            }
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};