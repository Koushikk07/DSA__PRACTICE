#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestConSeq(vector<int> nums)
{
    int n = nums.size();
    set<int> st;
    int longest = 1;
    for (auto it : nums)
    {
        st.insert(it);
    }

    for (auto it : st)
    {
        if (st.find(it) != st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
                longest = max(cnt, longest);
            }
        }
    }
    return longest;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    cout << longestConSeq(arr);
    return 1;
}