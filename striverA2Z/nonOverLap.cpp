#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end(), comp);
        int cnt = 1;
        int n = intervals.size();
        int lastEndTime = intervals[0][1];
        for (int i = 1; i < n; i++)
        {
            if (intervals[i][0] >= lastEndTime)
            {
                cnt++;
                lastEndTime = intervals[i][1];
            }
        }
        return n - cnt;
    }
};