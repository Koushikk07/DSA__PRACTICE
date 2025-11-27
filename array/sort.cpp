#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int> arr)
{
    int n=arr.size();

    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1)
        {
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> arr={1,1,1,1,2,2,0,1,2,0,2,1,0};
    sortArray(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}