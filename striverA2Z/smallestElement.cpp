#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int smallest(vector<int> arr)
{
    int n = arr.size();
    int small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}
int second_smallest(vector<int> arr)
{
    int n = arr.size();
    int small = INT_MAX;
    int second_small = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] != small && arr[i] < second_small)
        {
            second_small = arr[i];
        }
    }
    return second_small;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 2};
    cout << "Smallest Element in an array:" << smallest
}