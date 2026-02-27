#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate_k(int arr[], int n, int k)
{
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
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

    rotate_k(arr, n, 2);

    for (int i = 0; i< n; i++)
    {
        cout << arr[i]<<" ";
    }
}