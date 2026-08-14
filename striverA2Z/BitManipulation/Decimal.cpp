#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert2Decimal(string s)
{
    int len = s.length();
    int p2 = 1, num = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}

int main()
{
    int ans = convert2Decimal("1101");
    cout << ans;
}