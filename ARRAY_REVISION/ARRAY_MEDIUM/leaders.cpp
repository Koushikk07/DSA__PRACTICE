#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    int lead = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > lead)
        {
            lead = arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = Leaders(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}