#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        unordered_map<char, int> suitCount;
        unordered_map<int, int> rankCount;

        for (char s : suits)
        {
            suitCount[s]++;
        }

        for (auto it : suitCount)
        {
            if (it.second == 5)
                return "Flush";
        }

        for (int r : ranks)
        {
            rankCount[r]++;
        }

        bool pair = false;

        for (auto it : rankCount)
        {
            if (it.second >= 3)
                return "Three of a Kind";

            if (it.second == 2)
                pair = true;
        }

        if (pair)
            return "Pair";

        return "High Card";
    }
};