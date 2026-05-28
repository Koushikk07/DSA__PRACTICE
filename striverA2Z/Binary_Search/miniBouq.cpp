#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxElement(vector<int> arr)
    {
        int maxi = 0;
        for (auto it : arr)
        {
            maxi = max(maxi, it);
        }
        return maxi;
    }

    int possible(vector<int> bloomDay, int day, int m, int k)
    {
        int cnt = 0;
        int nofB = 0;

        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= day)
            {
                cnt++;
            }
            else
            {
                nofB += (cnt / k);
                cnt = 0;
            }
        }
        return nofB += (cnt / k);
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();
        int ans = 0;
        if (n < (long long)m * k)
            return -1;

        int low = 1;
        int high = maxElement(bloomDay);

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (possible(bloomDay, mid, m, k) >= m)
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