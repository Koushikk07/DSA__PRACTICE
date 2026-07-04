#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {

        if (s.size() != goal.size())
            return false;
        string m = s + s;

        return m.find(goal) != string::npos;
    }
};