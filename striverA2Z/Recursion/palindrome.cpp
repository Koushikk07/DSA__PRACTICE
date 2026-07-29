#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(string s, int i)
{
    if (i > (s.length() / 2))
        return true;

    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }
    return palindromeCheck(s, i + 1);
}

int main()
{
    cout << boolalpha << endl;
    cout << palindromeCheck("MADAM", 0);
}