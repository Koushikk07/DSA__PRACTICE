#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> FindNSE(vector<int> arr)
{
    int n = arr.size();
    vector<int> nse(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse;
}
vector<int> FindPSE(vector<int> arr)
{
    int n = arr.size();
    vector<int> pse(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            st.pop();
        }
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pse;
}

int sum(vector<int> arr)
{
    vector<int> nse = FindNSE(arr);
    vector<int> pse = FindPSE(arr);
    int total = 0;
    int n = arr.size();
    int mod = (int)(1e9 + 7);

    for (int i = 0; i < n; i++)
    {
        int left = i - pse[i];
        int right = nse[i] - 1;
        total = (total + (right * left * 1LL * arr[i]) % mod) % mod;
    }
    return total;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    cout << sum(arr);
}