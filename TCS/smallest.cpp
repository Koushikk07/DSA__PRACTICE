#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int smallest_element(int arr[], int n)
{
    int ele = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<ele){
            ele = arr[i];
        }
    }
    return ele;
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

    int ans  = smallest_element(arr,n);
    cout<<ans;
}
