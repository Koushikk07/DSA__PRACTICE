#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int nextPer(int arr[], int n)
{
    next_permutation(arr, arr + n);
}
vector<int> Leaders(vector<int> &arr, int n)
{
    n = arr.size();
    vector<int> ans;
    bool leader = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
            ans.push_back(arr[i]);
    }
}
vector<int> leaderInArray(vector<int> &arr, int n)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    return ans;
}
int longConSeq(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    int longest = 1;
    int cnt = 0;
    int lastSmaller = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            cnt = cnt + 1;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller)
        {
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}
int longConSeqOptimal(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main()
{
}