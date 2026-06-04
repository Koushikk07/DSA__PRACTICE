#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxiEle(vector<int> arr)
    {
        int maxi = 0;
        for (auto it : arr)
        {
            maxi = max(maxi, it);
        }
        return maxi;
    }

    int sumEle(vector<int> arr)
    {
        int sum = 0;
        for (auto it : arr)
        {
            sum += it;
        }
        return sum;
    }

    int reqDays(vector<int> arr, int cap)
    {
        int day = 1;
        int load = 0;
        for (auto it : arr)
        {
            if (load + it > cap)
            {
                day++;
                load = it;
            }
            else
            {
                load += it;
            }
        }
        return day;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int low = maxiEle(weights);
        int high = sumEle(weights);
        int ans = high;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (reqDays(weights, mid) <= days)
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