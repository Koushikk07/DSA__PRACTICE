#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int findMiss(vector<int> &arr)
{
    int n=arr.size();

    int totalsum=(n+1)*(n+2)/2;
    int totalmiss=0;
    for(int i=0;i<n;i++)
    {
        totalmiss+=arr[i];
    }
    return totalsum-totalmiss;

}

int main()
{
    vector<int> arr={1,2,3,4,5,7,8,9};
    cout<<findMiss(arr);

}