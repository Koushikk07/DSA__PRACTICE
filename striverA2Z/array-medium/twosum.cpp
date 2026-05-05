#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool two_sum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());

    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum > target)
            j--;
        else if (sum < target)
            i++;
        else
        {
            return true;
        }
    }
    return false;
}

pair<int, int> twoSum_index(vector<int> arr, int target)
{

    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int rem = target - arr[i];
        if (mp.find(rem) != mp.end())
        {
            return {mp[rem], i};
        }
        mp[arr[i]] = i;
    }
    return {};
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    cout << boolalpha;
    pair<int, int> ans = twoSum_index(arr, 14);

    cout << ans.first << " " << ans.second;

    return 0;
}