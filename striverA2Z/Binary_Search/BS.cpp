#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
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
    return -1;
    
}
int R_binary(vector<int> arr, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target)
        return mid;
    else if (target > arr[mid])
        return R_binary(arr, mid + 1, high, target);
    return R_binary(arr, low, high - 1, target);
}
// vector<int> search(vector<int> arr, int target)
//{
//    return R_binary(arr, 0, arr.size() - 1, target);
//}
int lowerBound(int arr[], int n, int target)
{
    /*int low = 0, high = n - 1;
     int ans = n - 1;
     while (low <= high)
     {
         int mid = (low + high) / 2;
         if (arr[mid] >= target)
         {
             ans = mid;
             high = mid - 1;
         }
         else
         {
             low = mid + 1;
         }
     }
     cout << ans;*/
}
int R_search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid])
        {

            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
bool RR_search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid == 0])
            return true;
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++, high--;
            continue;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}
int minRotate(int arr[], int n)
{
    int low = 0, high = n - 1, ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid + 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}
int timesRotate(int arr[], int n)
{
    int low = 0, high = n - 1, ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            if (arr[mid] <= ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
}
int nonDupSingle(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];
    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int peakElement(vector<int> arr)
{
    int n = arr.size();
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid] > arr[mid - 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    /*int n;

    cout << "enter the size of an array:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int target;
    cout << "enter the value to be searched:";
    cin >> target;*/

    // lowerBound(arr, n, target);
    // int lb = lower_bound(arr, arr + n, target) - arr;
    // cout << lb;
    // binary(arr, n, target);
    // search(arr, target);
    // vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    // int target;
    // cout << "enter the target:";
    // cin >> target;

    // search(arr, target);
    // cout << anss;
    // bool ans = RR_search(arr, n, target);
    // cout << ans;

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    // int answer = minRotate(arr, n);
    // int answer = timesRotate(arr, n);
    int anss = peakElement(arr); // nonDupSingle(arr, n);
    cout << anss;
}