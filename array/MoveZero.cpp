#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> MoveZero(vector<int> arr)
{
    vector<int> ans;
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            ans.push_back(arr[i]);
        }
    }
    int m=ans.size();

    for(int i=m;i<n;i++)
    {
        ans.push_back(0);
    }

    

    return ans;
}

int main()
{
    vector<int> arr = {1, 0, 0, 2, 3, 0, 0, 3, 4, 5,0};

    vector<int> ans = MoveZero(arr);
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}