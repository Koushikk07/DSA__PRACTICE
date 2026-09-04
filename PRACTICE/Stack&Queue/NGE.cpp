#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> Next_Greater_Element(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {6, 0, 8, 1, 3};
    vector<int> ans = Next_Greater_Element(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}