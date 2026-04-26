#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void LeftRotateByD(vector<int> &arr, int d)
{

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Before Rotate:" << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    LeftRotateByD(arr, 2);
    cout << "After Rotate:" << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}