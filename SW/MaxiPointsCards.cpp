#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxpoints(vector<int> points, int k)
{
    int n = points.size();

    int left_sum = 0, right_sum = 0, maxSum = 0;

    for (int i = 0; i < k; i++)
    {
        left_sum += points[i];
    }
    maxSum = left_sum;
    int rightInd = n - 1;
    for (int i = k - 1; i >= 0; i--)
    {
        left_sum -= points[i];
        right_sum += points[rightInd];
        rightInd--;
        maxSum = max(maxSum, left_sum + right_sum);
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k = 4;
    cout << "The max points of cards: " << maxpoints(arr, k);
}