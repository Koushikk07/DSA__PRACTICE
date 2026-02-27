#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n)
{
    sort(arr,arr+n);
    int h = (n/2);
    reverse(arr+h,arr+n);
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
    rearrange(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}