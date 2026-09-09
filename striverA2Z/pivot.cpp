#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int pivotInteger(int n)
    {

        int pre = 1, suff = n;
        int left = 1, right = n;

        while (left < right)
        {
            if (pre < suff)
            {
                left++;
                pre += left;
            }
            else
            {
                right--;
                suff += right;
            }
        }
        return pre == suff ? left : -1;
    }
};