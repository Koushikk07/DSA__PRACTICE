#include<iostream>
#include<stdio.h>
using namespace std;

int largestElement(int arr[],int n)
{
    int lar=0;
    for(int i=0;i<=n;i++)
    {
        if(lar<=arr[i])
        {
            lar=arr[i];
        }

    }
    return lar;

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
    int ans=largestElement(arr,n);
    cout<<"the largest element:"<< ans;


}