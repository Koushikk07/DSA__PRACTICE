#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int MajEle(vector<int> &arr)
{
    int cnt=0;
    int element;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            element=arr[i];
        }else if(element==arr[i])
        {
            cnt++;
        }else{
            cnt--;
        }
    }

    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            cnt2++;
        }
    }

    if(cnt2> (n/2)) return element;
}

int main()
{
    vector<int> arr={1,2,2,3,4,2,2,};
    int ans=MajEle(arr);
    cout<<"the majority element is: "<<ans;
    
}