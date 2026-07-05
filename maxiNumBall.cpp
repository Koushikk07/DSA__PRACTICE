#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxNumberOfBalloons(string text)
{

    unordered_map<char, int> mpp;
    for (char c : text)
    {
        mpp[c]++;
    }
    int ans = INT_MAX;

    ans = min(ans, mpp['b']);
    ans = min(ans, mpp['a']);
    ans = min(ans, mpp['l'] / 2);
    ans = min(ans, mpp['o'] / 2);
    ans = min(ans, mpp['n']);

    return ans;
}

int main()
{
}