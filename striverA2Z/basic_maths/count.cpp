#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n/=10;
    }
    cout<<cnt;
}