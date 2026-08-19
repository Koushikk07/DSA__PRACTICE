#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &arr)
{
    int n = arr.size();

    vector<int> ans(n);

    int p = 0;
    int ng = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ans[p] = arr[i];
            p += 2;
        }
        else
        {
            ans[ng] = arr[i];
            ng += 2;
        }
    }

    arr = ans;
}

int main()
{
    vector<int> A = {1, 2, -4, -5};
    rearrange(A);
    for (auto it : A)
    {
        cout << it << " ";
    }
    cout << endl;
}