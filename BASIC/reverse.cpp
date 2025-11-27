#include<iostream>
#include<stdio.h>
using namespace std;
int revFun(int n)
{
int revNum=0,remainder;
while(n!=0)
{
    remainder=n%10;
    revNum=revNum*10+remainder;
    n/=10;

}
return revNum;

}

int main()
{
    int n;
    cout<<"enter the string:"<<endl;
    cin>>n;
    int ans= revFun(n);
    cout<<"the reversed string:"<<ans;
    return 0;

}