#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NCR(int n, int r)
{
    int res = 1;
    for (int i = 0; i <= r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void print(int n, int r)
{
    for (int i = 0; i < n; i++)
    {
        cout << NCR(n, r);
    }
}

// full Triangle

void printFull(int n)
{
    vector<vector<int>> ans;
    for (int i = 1; i < n; i++)
    {
        vector<int> temp;

        for (int j = 1; j < i; j++)
        {
            temp.push_back(NCR(i - 1, j - 1));
        }
        ans.push_back(temp);
    }

    for (auto it : ans)
    {
        for (auto gt : it)
        {
            cout << gt << " ";
        }
        cout << endl;
    }
}
int main()
{
    printFull(5);
    return -1;
}