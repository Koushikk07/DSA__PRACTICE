#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void RotateMatrix(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout << "Before Rotation:" << endl;
    for (auto it : arr)
    {
        cout << "[ ";
        for (auto gt : it)
        {
            cout << gt << " ";
        }
        cout << "]" << endl;
        ;
    }
    RotateMatrix(arr);
    cout << "After Rotation:" << endl;
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