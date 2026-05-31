#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int cnt = 0, r = 0, l = 0;

        for (auto it : moves)
        {
            if (it == '_')
            {
                cnt++;
            }
            else if (it == 'R')
            {
                r++;
            }
            else
            {
                l++;
            }
        }
        return abs(l - r) + cnt;
    }
};

int main()
{
    // leetcode
}