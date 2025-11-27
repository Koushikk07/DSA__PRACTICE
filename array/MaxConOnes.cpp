#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int MaxCount(vector<int> arr)
{
    int n=arr.size();
    int cnt=0,maxcnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxcnt=max(maxcnt,cnt);
        }else{
            cnt=0;
        }
    }
    return maxcnt;
}
int main()
{
    vector<int> arr={1,1,0,0,0,1,1,1,1,1,0,1,0,1,0,1,1};
    cout<<MaxCount(arr);

}