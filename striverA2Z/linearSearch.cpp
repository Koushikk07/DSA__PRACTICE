#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target)
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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 5, 6, 21};
    int ans = linearSearch(arr, 21);
    if (ans != -1)
    {
        cout << "Found at index " << ans << endl;
    }
    else
    {
        cout << "Not Found";
    }
}