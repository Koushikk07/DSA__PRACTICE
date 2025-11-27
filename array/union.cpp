#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int FindUnion(vector<int> &arr1, vector<int> &arr2)
{
    int n=arr1.size();
    int m=arr2.size();

    set<int> uniarr;


    for(int i=0;i<n;i++)
    {
        uniarr.insert(arr1[i]);
    }

    for(int i=0;i<m;i++)
    {
        uniarr.insert(arr2[i]);
    }
    cout<<"union arrays are:";
    for(int e:uniarr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int> arr1={1,2,45,123,566,156,51,5,6,67,8,9,80,90};
    vector<int> arr2={1,2,45,123,566,156,51,5,6,67,8,9,80,90};
 cout<<FindUnion(arr1,arr2);
 

}