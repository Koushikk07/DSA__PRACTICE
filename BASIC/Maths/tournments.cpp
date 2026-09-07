#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfMatches(int n)
    {

        int teams = n;
        int match = 0;

        while (teams > 1)
        {
            int currentMatches = teams / 2;
            match += currentMatches;
            teams -= currentMatches;
        }

        return match;
    }
};