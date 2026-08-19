#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    long long maxi = LLONG_MIN;
    long long sum = 0;

    for (auto it : nums)
    {
        sum += it;
        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return (int)maxi;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSub = maxSubArray(arr);

    cout << "The maximum subarray sum is:" << maxSub << endl;
}