#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

bool FindInB(vector<int> &arr,int x)
{
    int n=arr.size();
    int low=0,high=n-1;
    
    while(low<=high)
    {
        int mid=(low + high)/2; 

        if(arr[mid]==x) return true;

        if(arr[mid]>x)
        {
         high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
}

int main()
{
    int x=51;
    vector<int> arr={1,2,3,4,5,6,7};
    bool ans = FindInB(arr,x);
    cout<<ans;
    return 0;
}