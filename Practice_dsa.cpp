#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int largestEle(vector<int> arr)
{
    int n=arr.size();
    int Maxi=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>Maxi)
        {
            Maxi=arr[i];
        }
    }
    return Maxi;
}
int SecLarEle(vector<int> arr)
{
    int n=arr.size();

    if(n==0) return 0;

    int Lar=INT_MIN;
    int Slar = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>Lar)
        {
        Slar=Lar;
        Lar=arr[i];
        }

        if(arr[i]>Slar && arr[i]<Lar)
        {
            Slar=arr[i];
        }
    }
    return Slar;
}
bool CheckSorted(vector<int> arr)
{
int n=arr.size();
for(int i=0;i<n;i++)
{
    if(arr[i]>arr[i+1])
    {
        return false;
    }
    
}
return true;
}
int RemovDup(vector<int> arr)
{
    int n=arr.size();
    int index=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
void LeftRot(vector<int> arr)
{
    int n=arr.size();
    int temp=arr[0];

    for(int i=1;i<n-1;i++)
    {
        arr[i-1]=arr[i];
    }
    arr.push_back(temp);
}
int main()
{
    vector<int> arr={1,2,3,5,6};
    LeftRot(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;

}