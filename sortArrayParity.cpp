#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {

        for (int i = 0, j = 0; j < nums.size(); j++)
        {
            if (nums[j] % 2 == 0)
            {
                swap(nums[i++], nums[j]);
            }
        }

        return nums;
    }
};
s

    int
    main()
{ // leetcode problem
}