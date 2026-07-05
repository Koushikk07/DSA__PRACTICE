#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {

        string st;
        string ans;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                st += s[i];
            }
            else if (!st.empty())
            {
                reverse(st.begin(), st.end());

                if (!ans.empty())
                    ans += ' ';

                ans += st;
                st.clear();
            }
        }

        if (!st.empty())
        {
            reverse(st.begin(), st.end());

            if (!ans.empty())
                ans += ' ';

            ans += st;
        }

        return ans;
    }
};