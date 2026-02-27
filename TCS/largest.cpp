#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int n)
{
    int ele = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ele)
        {
            ele = arr[i];
        }
    }
    return ele;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans  = largest_element(arr,n);
    cout<<ans;
}