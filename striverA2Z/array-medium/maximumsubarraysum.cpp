#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxSubSum(vector<int> arr)
{
    int n = arr.size();

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            // int sum = 0;

            // for (int k = i; k < j; k++)
            //  {
            sum += arr[j];
            // }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

int optimal(vector<int> arr)
{
    long long sum = 0;
    long long maxi = LONG_LONG_MIN;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (maxi < sum)
        {
            maxi = max(maxi, sum);
        }
        else if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << optimal(arr);
}