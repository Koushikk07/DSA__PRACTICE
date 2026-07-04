#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.size() != t.size())
            return false;

        unordered_map<char, int> mpp;

        for (char c : s)
        {
            mpp[c]++;
        }

        for (char a : t)
        {
            mpp[a]--;
        }

        for (auto it : mpp)
        {
            if (it.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};