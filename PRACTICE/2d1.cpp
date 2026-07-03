#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = row * col - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int rw = mid / col;
            int cl = mid % col;
            int exps = matrix[rw][cl];
            if (exps == target)
                return true;
            else if (exps < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};