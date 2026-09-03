#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string Prefix2Infix(string s)
{
    int n = s.length();
    int i = n - 1;
    stack<string> st;

    while (i >= 0)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string sh = '(' + t1 + s[i] + t2 + ')';
            st.push(sh);
        }
        i--;
    }
    return st.top();
}

int main()
{
    cout << Prefix2Infix("*+PQ-MN");
}