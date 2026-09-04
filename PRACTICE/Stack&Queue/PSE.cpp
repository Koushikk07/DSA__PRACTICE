#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> PSE(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        ans[i] = st.empty() ? -1 : st.top();

        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> ans = PSE(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}