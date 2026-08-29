#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int sumofD(vector<int> arr, int n)
{
    int ans = 0;
    for (auto it : arr)
    {
        ans += ceil((double)it / n);
    }
    return ans;
}

int Divisor(vector<int> arr, int thresold)
{
    int n = arr.size();
    int high = *max_element(arr.begin(), arr.end());
    int low = 1;
    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int total = sumofD(arr, mid);

        if (sumofD(arr, mid) <= thresold)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 5, 9};
    cout << "Smallest divisor: " << Divisor(arr, 6);
}