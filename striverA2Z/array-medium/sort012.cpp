#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Dutch_Nation_Flag(vector<int> &arr)
{

    // fukk! just kidding
    // sort(arr,arr+n);
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
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
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    Dutch_Nation_Flag(arr);
    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}