// selection sort

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


void select(vector<int> &arr, int n)
{
    for (int i = 0; i<=n-2; i++)
    {
        for (int j = i; j <=n-1; j++)
        {
            int mini=i;
            if (arr[j] < arr[mini])
            {
                swap(arr[j], arr[mini]);
                mini = j;

            }
        }
    }
}

void insertion(vector<int> &arr,int n)
{
    int min=0;
    for(int i=0;i<n;i++)
    {
        

    }
}
void bubble(vector<int> &arr,int n)
{
    for(int i=n-1;i>=1;i--)
    {
        
    }
}
int main()
{
    vector<int> arr = {12, 45, 23, 52, 20, 9};
    int n = arr.size();
    bubble(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}