#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> single(int row)
{
    vector<int> ans;
    ans.push_back(1);
    int ele = 1;

    for (int i = 1; i < row; i++)
    {
        ele = ele * (row - i);
        ele = ele / i;
        ans.push_back(ele);
    }
    return ans;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> arr;
    for (int i = 1; i <= numRows; i++)
    {
        arr.push_back(single(i));
    }
    return arr;
}

int main()
{
    // Practiced in leetcode
}