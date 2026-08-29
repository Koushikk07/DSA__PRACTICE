#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Binary_Search(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 9, 12, 34, 56, 78};
    cout << "Target Found at Index: " << Binary_Search(arr, 5);
    return -1;
}