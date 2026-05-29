#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <numeric>
using namespace std;

class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {

        unordered_map<int, int> mpp;

        if (deck.size() < 2)
            return false;

        for (int i = 0; i < deck.size(); i++)
        {
            mpp[deck[i]]++;
        }

        int g = 0;

        for (auto it : mpp)
        {
            g = __gcd(g, it.second);
        }

        return g >= 2;
    }
};

int main()
{
    // leetcode
}