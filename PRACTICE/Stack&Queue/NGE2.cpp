#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i % n])
        {
            st.pop();
        }
        if (i < n)
        {
            ans[i] = st.empty() ? -1 : st.top();
        }
        st.push(arr[i % n]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 10, 12, 1, 11};
    vector<int> ans = NGE(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}