#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BinarySearch(vector<int> &arr,int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high)
    {
    int mid = low + (high - low) / 2;
    if(arr[mid] == target)
    {
        cout<<"Element found at index "<<mid<<endl;
        return;
    }
    else if(arr[mid] < target)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
}
}

int main()
{
    vector<int> arr = {34, 7, 23, 32, 5, 62};
    int n = arr.size();
    BinarySearch(arr, 23);
return 0;
}
