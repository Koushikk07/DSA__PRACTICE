#include<iostream>
#include<stdio.h>
using namespace std;

int countN(int n)
{
    int cnt=0;
    if(n==0) return 0;

    while(n>0)
    {
        cnt++;
        n/=10;

    }
    return cnt;

}

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int ans=countN(n);
    cout<<"size of N:"<<ans;
    return 0;
}
