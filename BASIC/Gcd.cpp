#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<result;
    return 0;

}