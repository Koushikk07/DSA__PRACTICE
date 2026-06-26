#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {
        int sum = 0;
        for (int c = 0; c < s.length() - 1; c++)
        {
            sum += abs((s[c] - s[c + 1]));
        }
        return sum;
    }
};