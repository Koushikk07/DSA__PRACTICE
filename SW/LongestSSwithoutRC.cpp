#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Longest_Substring(string s)
{

    int hash[256] = {-1};
    int left = 0, right = 0, maxlen = 0, len = 0;
    ;

    while (right < s.size())
    {
        if (hash[s[right]] != -1)
        {
            if (hash[s[right]] >= left)
            {
                left = hash[s[right]] + 1;
            }
        }
        len = right - left + 1;
        maxlen = max(len, maxlen);
        hash[s[right]] = right;
        right++;
    }
    return maxlen;
}

int main()
{

    string s = "cabdzabcd";
    cout << "Max Length of Substring without repeating: " << Longest_Substring(s);
}