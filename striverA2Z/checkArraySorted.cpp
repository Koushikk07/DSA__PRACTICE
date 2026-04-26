#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkArrSorted(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 5, 6, 6, 7};
    cout << boolalpha << endl;
    cout << "Given array is sorted?  " << checkArrSorted(arr);
    return 0;
}