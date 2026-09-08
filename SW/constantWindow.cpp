#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxiSumWithKthsizeWindow(vector<int> nums, int k)
{
    int n = nums.size();

    int left = 0, right = 0, maxSum = 0, sum = 0;

    while (right < k)
    {
        sum += nums[right];
        right++;
    }
    maxSum = sum;
    while (right < n)
    {
        sum -= nums[left];
        left++;

        sum += nums[right];
        right++;
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{

    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    int k = 4;
    cout << "The Max Sum in Constant window of size " << k << " : " << MaxiSumWithKthsizeWindow(arr, k);
}