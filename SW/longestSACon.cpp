#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bruteforce

int Bf_longest_subarray_Con(vector<int> nums, int k)
{

    int n = nums.size();

    int maxlen = 1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum <= k)
            {
                maxlen = max(maxlen, j - i + 1);
            }
            else
            {
                break;
            }
        }
    }
    return maxlen;
} // TC: big 0 n*2;

// optimal and better

int maxLenOfSubarray_withCondition(vector<int> nums, int k)
{
    int n = nums.size();
    int left = 0, right = 0, maxlen = 0, sum = 0;

    while (right < n)
    {
        sum += nums[right];
        if (sum > k) // better to change {replace while with if}
        {
            sum -= nums[left];
            left++;
        }
        if (sum <= k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right = right + 1;
    }
    return maxlen;
}

int main()
{

    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    int k = 14;
    cout << "The Max Length with less than or Equal to K: " << maxLenOfSubarray_withCondition(arr, k);
}