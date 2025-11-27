#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int selectionSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini]) mini = j;
        }
        int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
    }
}
int bubbleSort(int arr[],int n)
{
   // for(int i=0;i<=n-2;i++)
   // {
    //    for(int j=0;j<=i;j++){
    //    if(arr[i]>arr[j])
   //     {
   //         swap(arr[i],arr[j]);
   //     }
   // }
   // }

   for(int i=n-1;i>=0;i--)
   {
       for(int j=0;j<=i-1;j++)
       {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);

        }
       }

   }
}
int insertion(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main()
{
    int n=6;
    int arr[n] = {12,34,1,6,14,5,7};
    //selectionSort(arr,n);
    //bubbleSort(arr,n);
    insertion(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}