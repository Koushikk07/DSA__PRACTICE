#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int gcd = __gcd(a, b);

        int ans = 0;
        int i = 1;

        for (; i * i < gcd; i++)
        {
            if (gcd % i == 0)
                ans += 2;
        }

        if (i * i == gcd)
            ans++;

        return ans;
    }
};