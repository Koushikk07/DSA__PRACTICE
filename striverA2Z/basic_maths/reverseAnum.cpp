#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    string ans;
    while(n!=0)
    {
        int x= n%10;
        ans+=(x+'0');
        n=n/10;
    }
    cout<<ans;
}