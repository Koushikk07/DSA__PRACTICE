#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxPro(vector<int> arr,int n)
{
    n=arr.size();

    int minimum=arr[0];
    int maxi=0;
    for(int i=0;i<=n-1;i++)
    {
        int cost=(arr[i]-minimum);
        maxi=max(cost,maxi);
        minimum=min(minimum,arr[i]);

    }

    return maxi;

}

int  main()
{
    vector<int> arr={7,1,5,3,6,4};
    int n=arr.size();
    int ans=MaxPro(arr,n);
    cout<<"the max profit is:"<< ans<<endl;
    return -1;
}