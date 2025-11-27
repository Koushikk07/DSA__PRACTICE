#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string convert2binary(int num)
{
    string res="";
    while(num!=1)
    {
        if(num%2==1) res+='1';
        else res+='0';
        num=num/2;
    }
reverse(res.begin(),res.end());
return res;
}
int convert2Dec(string x)
{
    int len=x.length();
    int  p2=1,num=0;
    for(int i=len-1;i>=0;i--)
    {
        if(x[i]=='1'); num=num+p2;
        p2=p2*2;

    }
    return num;
}
        
int main()
{
    int x=13;
    // string ans=convert2binary(x);
    int ans=convert2Dec("100");
    cout<<ans;

}