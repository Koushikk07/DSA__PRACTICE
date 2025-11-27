#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int funPivot(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot&&i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot&&j>=low+1)
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}
void qs(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int pivot =funPivot(arr,low,high);
        qs(arr,low,pivot-1);
        qs(arr,pivot+1,high);
    }
}
vector<int> quicksort(vector<int> arr)
{
    qs(arr,0,arr.size() - 1);
    return arr;
}
int main()
{
    vector<int> arr = { 5,7,4,6,11,8,34,1};
    vector<int> temp = quicksort(arr);
    for(auto it: temp)
    {
        cout<<it<<" ";

    }

}