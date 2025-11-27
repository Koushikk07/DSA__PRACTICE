#include <iostream>
#include <stdio.h>
using namespace std;

int checkSortArray(int arr[], int n)
{
    int flag = 1;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
        }
        else
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int n;
    cout << "enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int an = checkSortArray(arr, n);
    if (an == 0)
        cout << "not sorted.";
    else
        cout << "sorted";
}