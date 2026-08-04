#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxiSubArr(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0;
    int ansstart = -1, ansend = -1, start = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];
        if (sum > maxi)
        {
            ansstart = start;
            maxi = sum;
            ansend = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ans = maxiSubArr(arr);
    cout << ans;
}