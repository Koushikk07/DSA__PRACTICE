#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestConsective(vector<int> arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    unordered_set<int> st;
    int longest = 1;
    for (auto it : arr)
    {
        st.insert(it);
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
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 4, 200, 1, 3, 2};
    int ans = longestConsective(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
}