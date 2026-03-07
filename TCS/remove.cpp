#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDup(int arr[],int n){

    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }

    }
    return j+1;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    cout<<removeDup(arr,n);

}