#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumD(vector<int> arr, int t)
    {
        int sum = 0;
        for (auto it : arr)
        {
            sum += ceil((double)it / t);
        }
        return sum;
    }
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int low = 1;
        int ans = 0;
        int high = *max_element(nums.begin(), nums.end());
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (sumD(nums, mid) <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    // leetcode
}