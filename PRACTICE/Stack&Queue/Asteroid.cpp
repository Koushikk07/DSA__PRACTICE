#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> asteroid_Collision(vector<int> arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            ans.push_back(arr[i]);
        else
        {
            while (!ans.empty() && ans.back() > 0 && ans.back() < abs(arr[i]))
            {
                ans.pop_back();
            }
            if (!ans.empty() || ans.back() == abs(arr[i]))
                ans.pop_back();
            else if (ans.empty() || ans.back() < 0)
                ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 7, 1, 1, 2, -3, -7, 17, 15, -16};
    vector<int> ans = asteroid_Collision(arr);

    cout << "After Collision: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return -1;
}