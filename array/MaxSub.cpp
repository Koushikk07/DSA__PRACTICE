#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SubArrMax(vector<int> &arr,int n)
{
    n=arr.size();

    long long sum=0,maxi=INT_MIN;
    int start,ansStart=-1,ansEnd=-1;

    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=max(maxi,sum);
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }

    return maxi;
}

int main()
{

    vector<int> arr={-2,1,7,-5,3,1,2,3,-1,-8};
    int n=arr.size();
    int ans=SubArrMax(arr,n);
    cout<<"the max element: "<<ans;

    return -1;

}