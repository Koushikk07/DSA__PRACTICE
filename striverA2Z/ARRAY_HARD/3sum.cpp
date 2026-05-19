#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;

        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        while (j < k)
        {
            int sum = nums[i];
            sum += nums[j];
            sum += nums[k];

            if (sum == 0)
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;

                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
}

int main()
{
}
