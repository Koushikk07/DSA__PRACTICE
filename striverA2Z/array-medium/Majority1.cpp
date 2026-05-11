#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Majority_Element(vector<int> arr)
{
    map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > (arr.size() / 2))
        {

            return it.first;
        }
    }
    return 0;
}

int optimal(vector<int> arr)
{
    int el = 0;
    int cnt = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (el == 0)
        {
            el = arr[i];
            cnt = 1;
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            cnt1++;
        }
        if (cnt1 > (n / 2))
            return el;
    }
    return 0;
}
int main()
{
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    cout << optimal(arr);
}