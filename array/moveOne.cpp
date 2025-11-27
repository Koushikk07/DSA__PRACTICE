#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> MoveEnd(vector<int> arr)
{
    int n=arr.size();
    int first=arr[0];

    for(int i=0;i<=n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = MoveEnd(arr);
    int n=ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}