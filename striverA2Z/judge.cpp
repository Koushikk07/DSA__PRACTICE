#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int ud = 0;
        int rl = 0;
        for (auto it : moves)
        {
            if (it == 'L')
            {
                rl++;
            }
            else if (it == 'R')
            {
                rl--;
            }
            else if (it == 'U')
            {
                ud++;
            }
            else if (it == 'D')

            {
                ud--;
            }
        }
        if (ud == 0 && rl == 0)
            return true;
        return false;
    }
};

int main()
{
    // leetcodes
}