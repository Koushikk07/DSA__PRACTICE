#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 1};
    next_permutation(arr.begin(), arr.end());

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}