#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> &arr)
{
    int n = arr.size();
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[k])
        {
            k++;
            arr[k] = arr[i];
        }
    }
    return k + 1;
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4};
    int unq = remove_duplicates(arr);
    cout << "Unique Element in given array:" << unq << endl;
    for (int i = 0; i < unq; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
