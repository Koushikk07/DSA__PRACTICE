#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long timeReq(vector<int> &piles, int h)
    {
        long long totalHrs = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            totalHrs += ceil((double)piles[i] / h);
        }
        return totalHrs;
    }

    int maxi(vector<int> piles)
    {
        int maxEle = 0;
        for (auto it : piles)
        {
            maxEle = max(maxEle, it);
        }
        return maxEle;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {

        int low = 1;
        int high = maxi(piles);
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            long long time = timeReq(piles, mid);

            if (time <= h)
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
}