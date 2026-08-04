#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> twoSum(vector<int> arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int sum = arr[i] + arr[j];

        if (sum == target)
        {

            ans.push_back({arr[i], arr[j]});
            i++;
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 13, 45, 6, 3};
    vector<vector<int>> ans = twoSum(arr, 5);

    cout << "{";
    for (auto it : ans)
    {
        cout << "{ ";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "}, ";
    }
    cout << "}";
}