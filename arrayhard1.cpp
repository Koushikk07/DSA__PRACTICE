#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int funcNCR(int n, int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / i + 1;
    }
    return res;
}
int printAns(int ans)
{
    int r;
    int c;
    int col;
    ans = (r - c) / col;
}
vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}
vector<int> majElement(vector<int> &arr)
{
    vector<int> ls;
    map<int, int> mpp;
    int n = arr.size();
    int mini = (n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i] == mini])
        {
            ls.push_back(arr[i]);
        }
        if (ls.size() == 2)
            break;
    }
    return ls;
}
vector<int> majEleOptimal(vector<int> &arr)
{
    int cnt1 = 0, cnt2 = 0;
    int el1, el2;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && el2 != arr[i])
        {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if (cnt2 == 0 && el1 != arr[i])
        {
            cnt2 = 1;
            el2 = arr[i];
        }
        else if (el1 == arr[i])
        {
            cnt1++;
        }
        else if (el2 == arr[i])
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
}
vector<vector<int>> threeSum(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }
    return ans;
}
vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && arr[j] == arr[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {

                long long sum = arr[i] + arr[j];
                sum += arr[k];
                sum += arr[l];
                if (sum > target)
                {
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && arr[k] == arr[k - 1])
                        k++;
                    while (k < l && arr[l] == arr[l + 1])
                        l--;
                }
            }
        }
    }
    return ans;
}
int subarrayXor(vector<int> &arr, int n, int target)
{
    n = arr.size();
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ arr[i];
        int x = xr ^ target;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
vector<vector<int>> mergeOverlapInt(vector<vector<int>> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || arr[i][0] > arr[i][1])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majEleOptimal(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}