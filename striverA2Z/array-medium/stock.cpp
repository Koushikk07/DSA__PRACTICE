#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Stocks(vector<int> &arr)
{
    int n = arr.size();
    int cost = arr[0];
    int profit = 0;
    int maxi = 0;
    for (int i = 1; i < n; i++)
    {
        profit = arr[i] - cost;
        maxi = max(profit, maxi);
        cost = min(cost, arr[i]);
    }
    return maxi;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << Stocks(prices);
}