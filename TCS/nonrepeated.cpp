#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int repeatedEle(int arr[],int n)
{
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    cout<<"The Repeating Elements are:"<<endl;
    for(auto i : mpp)
    {
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }
}

int main(){
int n;
cin>> n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
repeatedEle(arr,n);
}