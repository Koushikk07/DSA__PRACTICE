#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {

        if (s.size() != t.size())
            return false;

        vector<int> indexS(200, 0);
        vector<int> indexT(200, 0);

        for (int i = 0; i < s.length(); i++)
        {
            if (indexS[s[i]] != indexT[t[i]])
            {
                return false;
            }

            indexS[s[i]] = i + 1;
            indexT[t[i]] = i + 1;
        }
        return true;
    }
};