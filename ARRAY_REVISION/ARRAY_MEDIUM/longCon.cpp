#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Longest_Consective_Sequence(vector<int> arr)
{
    int n = arr.size();
    int longest = 1;
    unordered_map<int, int> mpp;
    for (auto it : arr)
    {
        mpp[it]++;
    }
    // store in the map, we have to find first element

    for (auto it : mpp)
    {
        if (mpp.find(it.first - 1) == mpp.end())
        {
            int cnt = 1;
            int x = it.first;
            while (mpp.find(x + 1) != mpp.end())
            {
                x = x + 1;
                cnt = cnt + 1;
                longest = max(longest, cnt);
            }
        }
    }
    return longest;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    cout << Longest_Consective_Sequence(arr);
}