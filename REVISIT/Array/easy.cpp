#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largest_Element(vector<int> nums)
{
    int n = nums.size();
    int lar = INT_MIN;

    for (auto it : nums)
    {
        if (it > lar)
        {
            lar = it;
        }
    }
    return lar;
}
int SecondLar(vector<int> nums)
{
    int n = nums.size();
    int lar = INT_MIN;
    int s_lar = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > lar)
        {
            s_lar = lar;
            lar = nums[i];
        }

        if (nums[i] < lar && nums[i] > s_lar)
        {
            s_lar = nums[i];
        }
    }
    return s_lar;
}

bool checkifSorted(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
void LeftRotate(vector<int> arr, int d)
{
    int n = arr.size();
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
}

void moveZeros(vector<int> &nums)
{
    int n = nums.size();
    int j = -1;

    // find the first zero
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int Linear_Search(vector<int> arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

vector<int> UnionOfarr(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (ans.back() != a[i] || ans.empty())
            {
                ans.push_back(a[i]);
                i++;
            }
        }
        else if (a[i] > b[j])
        {
            if (ans.back() != b[j] || ans.empty())
            {
                ans.push_back(b[j]);
                j++;
            }
        }
    }

    while (i < n)
    {

        if (ans.back() != a[i] || ans.empty())
        {
            ans.push_back(a[i]);
            i++;
        }
    }

    while (j < m)
    {

        if (ans.back() != b[j] || ans.empty())
        {
            ans.push_back(b[j]);
            j++;
        }
    }
}

int main()
{
}