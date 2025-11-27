#include<iostream>
#include<stdio.h>
using namespace std;

int linearSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k) cout<<"element found at index "<<i<<endl;

    }
    return  0;

}
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter  the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element to find:"<<endl;
    cin>>k;
    cout<<linearSearch(arr,n,k);

  


}