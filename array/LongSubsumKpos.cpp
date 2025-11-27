#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int longSub(vector<int> arr,int k)
{
int left=0,right=0,sum=0,maxlen=0;
int n=arr.size();
while(right<n)
{
sum+=arr[right];
while(sum>k && left<=right)
{
    sum-=arr[left];
    left++;

}
if(sum==k)
{
    maxlen=max(maxlen,right-left+1);
    
}
right++;
}
return maxlen;
}
int main()
{
    vector<int> arr={1,1,1,1,2,3,4,12,3,2,1,2,1,2,1};
    int k=4;
    cout<<longSub(arr,k);

}