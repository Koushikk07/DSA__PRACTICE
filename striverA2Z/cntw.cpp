#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSegments(string s)
    {

        if (s == "")
            return 0;

        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            {
                cnt++;
            }
        }
        return cnt;
    }
};