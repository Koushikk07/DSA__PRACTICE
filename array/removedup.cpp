#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> removedup(vector<int> arr)
{
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;

}

int main()
{
    vector<int> arr={1,2,2,3,4,14,15};
    vector<int> ans=removedup(arr);
    int n=ans.size();
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;

}