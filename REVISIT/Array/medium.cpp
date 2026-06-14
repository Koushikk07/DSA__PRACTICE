#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LongestSubarray(vector<int> arr, int k)
{
    int n = arr.size();
    int sum = 0;
    int r = 0, l = 0;
    int maxi = 0;
    while (r < n)
    {
        if (sum < k)
        {
            sum += arr[l];
            l++;
        }
        else if (sum > k)
        {
            sum -= arr[r];
            r++;
        }
        else if (sum == k)
        {
            maxi = max(maxi, l - r + 1);
        }
        return maxi;
    }
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int ans = LongestSubarray(nums, k);
    cout << "Longest Subarray:" << ans << endl;
    return -1;
}