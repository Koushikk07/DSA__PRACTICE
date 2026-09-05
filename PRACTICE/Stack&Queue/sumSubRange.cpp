#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 3, 2};
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int lar = arr[i], small = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            lar = max(lar, arr[j]);
            small = min(small, arr[j]);
            sum = sum + (lar - small);
        }
    }
    cout << sum;
}