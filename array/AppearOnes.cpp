#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int AppearOne(vector<int> arr)
{
    int n=arr.size();
    int uni=0;

    for(int i=0;i<n;i++)
    {
        uni^=arr[i];
    }
    return uni;
    
}
int main()
{
    vector<int> arr={1,1,2,3,3,4,4,5,5};
    cout<<AppearOne(arr);

}