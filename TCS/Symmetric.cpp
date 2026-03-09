#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//pending not yet done

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;i++)
        {
            cin>>arr[i][j];
        }
    }
 
for(int i=0;i<n;i++)
    {
        cout<<"{";
        for(int j=0;j<2;i++)
        {
            cout<< arr[i][j];
        }
        cout<<"}";
    }

}