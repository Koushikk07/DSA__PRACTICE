#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 12, 43, 67};
    cout << boolalpha;
    cout << BinarySearch(arr, 3);
}