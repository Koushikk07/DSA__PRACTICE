#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxiProdSum(vector<int> arr)
{
    int pre = 1, suff = 1;
    int n = arr.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suff == 0)
            suff = 1;

        pre = pre * arr[i];
        suff = suff * arr[n - i - 1];
        maxi = max(maxi, max(pre, suff));
    }
    return maxi;
}

int main()
{
    vector<int> arr = {2, 3, -2, 4};
    cout << " Maximum Product SubArray: " << MaxiProdSum(arr);
    return -1;
}