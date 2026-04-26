#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> arr)
{
    int xor1 = 0, xor2 = 0;
    int n = arr.size() - 1;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ (n + 1);
    return xor1 ^ xor2;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    cout << missingNum(arr);
    return 0;
}