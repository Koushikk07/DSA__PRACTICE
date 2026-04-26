#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveAllZeros2End(vector<int> &arr)
{
    int j = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 6, 7};
    moveAllZeros2End(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
