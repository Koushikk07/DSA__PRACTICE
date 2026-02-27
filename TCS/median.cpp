#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void median(int arr[], int n)
{
    if (n % 2 == 0)
    {
        cout << (n + 1) / 2 << " " << (n + 2) / 2 << endl;
    }
    else
    {
        cout << (n + 1) / 2;
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
    median(arr, n);
}