#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> triangle;

    // Build every row from the top through the requested index.
    for (int row = 0; row <= rowIndex; row++)
    {
        vector<int> current(row + 1, 1);

        // Fill interior positions from the two values above.
        for (int col = 1; col < row; col++)
        {
            current[col] = triangle[row - 1][col - 1] + triangle[row - 1][col];
        }

        triangle.push_back(current);
    }

    return triangle[rowIndex];
}

int main()
{
    int n = 5;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(getRow(i));
    }
    for (auto it : arr)
    {
        for (auto j : it)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return -1;
}