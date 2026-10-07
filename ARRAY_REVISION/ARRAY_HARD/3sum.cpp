#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();

    vector<vector<int>> ans;

    /* while (i < j)
    {
        int rem = target - (arr[i] + arr[j]);

        for (int k = i + 1; k < j - 1; k++)
        {
            if (arr[k] == rem)
            {
                return true;
            }
        }

    } */

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target)
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (sum > target)
                k--;
            else
                j++;
        }
    }
    return ans;
}

void print(vector<vector<int>> arr)
{
    for (auto it : arr)
    {
        for (auto k : it)
        {
            cout << k << ",";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 5, 12, 67, 7, 6, 8, 11, 4, 45, 9};
    cout << boolalpha;
    vector<vector<int>> ans = threeSum(arr, 16);
    print(ans);
}