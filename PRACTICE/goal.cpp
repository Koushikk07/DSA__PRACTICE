#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {

        string ans;

        for (int i = 0; i <= command.length(); i++)
        {
            if (command[i] == 'G')
            {
                ans += 'G';
            }
            else if (command[i] == ')' && command[i - 1] != 'l')
            {
                ans += 'o';
            }
            else if (command[i] == ')' && command[i - 1] == 'l')
            {
                ans += 'a';
                ans += 'l';
            }
        }
        return ans;
    }
};