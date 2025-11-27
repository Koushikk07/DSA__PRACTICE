#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;i++)
//         {

//             if(arr[i]+arr[j]==target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
{
}
string twoSum(int n, vector<int> &arr, int target)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}
string twoSumUsingTP(int n, vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    return "NO";
}
vector<int> sortZeroOneTwo(int n, vector<int> &arr)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }
    for (int i = cnt0 + cnt1; i < n; i++)
    {
        arr[i] = 2;
    }
}
void sortZero(vector<int> &arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int majority(vector<int> &arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt > n / 2)
        {
            return arr[i];
        }
    }
}
int maxSubSum(vector<int> &arr, int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (auto it : arr)
    {
        sum += it;
        maxi = max(sum, maxi);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
long long maxSubSumPrinting(int arr[], int n)
{
    long long maxi = LONG_MIN;
    long long sum = 0;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]n";
}
int buyStockAndSell(vector<int> &arr)
{
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
}
vector<int> RearrangeSign(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
vector<int> RearrangeSign2(vector<int> arr, int n)
{
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    if (pos.size() < neg.size())
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }
    return arr;
}
int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortZero(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}