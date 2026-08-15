#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minBitFlips(int start, int goal)
    {

        int xorR = start ^ goal;
        int ans = 0;

        while (xorR > 0)
        {
            ans += xorR & 1;
            xorR >>= 1;
        }

        return ans;
    }
};