#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int insertPos(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int pos = -1;
    while (low < high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
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
    return low;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int target = 7;
    cout << insertPos(arr, target);
}