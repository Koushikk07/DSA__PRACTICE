#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>> arr)
{
    int n = arr.size();
    int m = arr[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << arr[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << arr[i][left] << " ";
        }
        left++;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiral(arr);
}