#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSpecialChars(string word)
    {

        set<char> lower, upper;
        int cnt = 0;

        for (char ch : word)
        {
            if (islower(ch))
            {
                lower.insert(ch);
            }
            else
            {
                upper.insert(ch);
            }
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (lower.count(i) && upper.count(toupper(i)))
            {
                cnt++;
            }
        }

        return cnt;
    }
};

int main()
{
    // leetcode
}