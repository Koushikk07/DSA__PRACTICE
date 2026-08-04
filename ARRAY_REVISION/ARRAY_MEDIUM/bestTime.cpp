#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bestTimeToBuy(vector<int> arr)
{
    int n = arr.size();
    int mini = arr[0], cost = 0;

    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }
    return profit;
}

int main()
{
    vector<int> arr = {6, 1, 2, 3, 4, 53, 6};
    int ans = bestTimeToBuy(arr);
    cout << ans;
}