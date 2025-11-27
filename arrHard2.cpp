#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    long long arr3[n + m];
    int left = 0;
    int right = 0;
    int index = 0;
    while (left < n && right < n)
    {
        if (arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            left++;
            index++;
        }
        else
        {
            arr3[index] = arr2[right];
            right++;
            index++;
        }
    }
    while (left < n)
    {
        arr3[index++] = arr1[left++];
    }
    while (right < m)
    {
        arr3[index++] = arr2[right++];
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            arr1[i] = arr3[i];
        else
            arr2[i - n] = arr3[i];
    }
}
void mergeOptimal(long long arr1[], long long arr2[], int n, int m)
{
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}
vector<int> findMR(vector<int> arr)
{
    int n = arr.size();
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
            repeating = i;
        else if (hash[i] == 0)
            missing = i;
        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating, missing};
}
vector<int> findMissingNumOptimal(vector<int> arr)
{
    long long n = arr.size();
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 2;
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }
    long long val1 = S - SN;
    long long val2 = S2 - S2N;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
}
int merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temporary array in a sorted manner//
    int cnt = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high)
{
    int cnt = 0;
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);         // left half
    mergeSort(arr, mid + 1, high);    // right half
    cnt = merge(arr, low, mid, high); // merging sorted halves
    return cnt;
}

int main()
{
    // long long arr1[] = {1, 4, 8, 11};
    // long long arr2[] = {2, 3, 9};
    // int n = 4, m = 3;
    // merge(arr1, arr2, n, m);
    // cout << "The merged arrays are: " << "\n";
    // cout << "arr1[] = ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr1[i] << " ";
    // }
    // cout << "\narr2[] = ";
    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr2[i] << " ";
    // }
    // cout << endl;
    // return 0;

    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMR(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}