#include<stdio.h>
#include<iostream>
using namespace std;

int pal(int n)
{
    int rev=0,rem,org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        
        n/=10;

    }
    if(org==rev)
    {
        cout<<"it palindrome"<<endl;
    }else{
        cout<<"it is not a palindrome"<<endl;
    }

    
}

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<pal(n);
    return 0;
    
}