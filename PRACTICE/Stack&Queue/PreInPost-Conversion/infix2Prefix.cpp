#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int priority(char s)
{
    if (s == '^')
        return 3;
    else if (s == '*' || s == '/')
        return 2;
    else if (s == '+' || s == '-')
        return 1;

    return -1;
}

string Infix2Prefix(string s)
{
    reverse(s.begin(), s.end());
    int i = 0, n = s.length();
    stack<char> st;
    string ans = "";

    while (i < n)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (s[i] == '^')
            {
                while (st.empty() && priority(s[i] <= priority(st.top())))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.begin());
    return ans;
}

int main()
{
    string ans = Infix2Prefix("(A+B)*C-D+F");
    cout << ans;
}