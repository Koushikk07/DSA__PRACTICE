#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i > (n / 2))
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArr(arr, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 4, 54, 5, 6, 7};
    reverseArr(arr, 0);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}