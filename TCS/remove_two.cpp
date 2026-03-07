#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDup(int arr[], int n)
{
    unordered_map<int, bool> seen;
    int result[n];

    for (int i = 0; i < n; i++)
    {
        if (!seen[arr[i]])
        {
            result[arr[i]];
            seen[arr[i]] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    removeDup(arr,n);
}