#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int longSub(vector<int> arr,int k)
{
    unordered_map<int,int> prefixSumMap;
    int sum=0,maxlen=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if(sum==k)
        {
            maxlen=i+1;
        }
        if(prefixSumMap.find(sum-k)==prefixSumMap.end())
        {
            prefixSumMap[sum]=i;
        }
    }
    return maxlen;

}
int main()
{
    vector<int> arr={1,1,-1,1,2,-3,-4,12,3,2,1,2,1,2,1};
    int k=4;
    cout<<longSub(arr,k);

}