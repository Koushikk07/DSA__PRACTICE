#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int get_strength(char ch)
    {
        if ('a' <= ch && ch <= 'z')
        {
            return 1;
        }
        else if ('A' <= ch && ch <= 'Z')
        {
            return 2;
        }
        else if ('0' <= ch && ch <= '9')
        {
            return 3;
        }
        else if (ch == '!' || ch == '@' || ch == '#' || ch == '$')
        {
            return 5;
        }
        return 0;
    }
    int passwordStrength(string password)
    {

        unordered_set<char> unq(password.begin(), password.end());
        auto it = unq.begin();
        int strength = 0;
        while (it != unq.end())
        {
            strength += get_strength(*it);
            it++;
        }
        return strength;
    }
};

int main()

{
    // leetcode
}