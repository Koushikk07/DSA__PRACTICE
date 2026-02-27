#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int average(int arr[], int n)
{
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    ans = sum / n;
    return ans;
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
    int ans = average(arr,n);
    cout<<ans;
}