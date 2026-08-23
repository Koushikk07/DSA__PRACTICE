#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bruteforce

int MajorityEle2(vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    for (auto it : arr)
    {
        mpp[it]++;
    }

    for (auto it : mpp)
    {
        if (it.second >= (n / 3))
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 1, 3, 2, 5, 4};
    int ans = MajorityEle2(arr);
    cout << "The Majority Element: " << ans << endl;

    return -1;
}