#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dp_simple(vector<int> arr)
{
    int n = arr.size();
    int mini = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }
    return profit;
}

int main()
{
    vector<int> stocks = {10, 1, 4, 2, 5, 7, 1};
    cout << dp_simple(stocks);
    return 0;
}