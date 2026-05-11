#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> Leader(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    int maxi = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (maxi < arr[i])
        {
            ans.push_back(arr[i]);
            maxi = max(maxi, arr[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 22, 12, 6};
    vector<int> ans = Leader(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}