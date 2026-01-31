#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void MoveZerosEnd(vector<int> arr)
{
    int n=arr.size();
    vector<int> ans;

    for(auto it:arr){
        if(it!=0)
        {
            ans.push_back(it);
        }
    }
int m = ans.size();
    for(int i=0;i<n-m;i++)
    {
        ans.push_back(0);
    }
   
    for(auto a:ans){
        cout<<a<<" ";
    }

}
int main()
{
    vector<int> arr = {4,5,0,1,9,0,5,0};
    MoveZerosEnd(arr);
    return -1;
   

}