#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SetMatrixZero(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int col0 = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                if (j != 0)
                {
                    arr[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
            {
                if (arr[i][0] == 0 || arr[0][j] == 0)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
    if (arr[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            arr[0][j] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i][0] == 0;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 1, 1, 1}, {1, 1, 0, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}};
    SetMatrixZero(arr);

    for (auto it : arr)
    {
        cout << "[ ";
        for (auto gt : it)
        {
            cout << gt << " ";
        }
        cout << "]" << endl;
    }
    return -1;
}