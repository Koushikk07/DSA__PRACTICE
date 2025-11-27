#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> MoveDEnd(vector<int> arr,int d)
{
   vector<int> ans;
   int n=arr.size();

   //ending parts adding

   for(int i=d-1;i<n;i++)
   {
    ans.push_back(arr[i]);
   }
   for(int i=0;i<d-1;i++)
   {
    ans.push_back(arr[i]);
   }

   return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d=3;
    vector<int> ans = MoveDEnd(arr,d);
    int n=ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}