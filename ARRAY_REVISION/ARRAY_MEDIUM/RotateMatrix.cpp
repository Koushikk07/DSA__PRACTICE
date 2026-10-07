#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void RotateMatrix(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
    }

    for (auto it : arr)
    {
        reverse(it.begin(), it.end());
    }
}

void print(vector<vector<int>> arr)
{
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << "Before Rotation:" << endl;
    print(arr);
    cout << "After Rotation:" << endl;
    RotateMatrix(arr);
    print(arr);
}