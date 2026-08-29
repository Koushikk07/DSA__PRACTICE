#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int total_days(vector<int> arr, int n, int m, int k)
{
    int cnt = 0;
    int noOfB = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= n)
            cnt++;
        else
        {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    return noOfB += (cnt / k);
}

int Minimum_Bouquets(vector<int> arr, int m, int k)
{
    if (m * k > arr.size() - 1)
        return -1;
    auto low_pt = min_element(arr.begin(), arr.end());
    auto high_pt = max_element(arr.begin(), arr.end());
    int low = *low_pt;
    int high = *high_pt;
    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int total = total_days(arr, mid, m, k);
        if (total == true)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    cout << Minimum_Bouquets(arr, 2, 3);
}