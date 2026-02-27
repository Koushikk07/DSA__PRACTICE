#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Freq(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto r : mpp)
    {
        cout << r.first << " :" << r.second << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Freq(arr, n);
}