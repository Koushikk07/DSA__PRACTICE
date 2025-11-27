#include <iostream>
#include <stdio.h>
#include <climits>
using namespace std;

int SeclargestElement(int arr[], int n)
{
    int lar = INT_MIN;
    int sec = INT_MIN;

    for (int i = 0; i <n; i++)
    {
        if (lar < arr[i])
        {
            sec = lar;
            lar = arr[i];
        }
        else if (arr[i] > sec && arr[i] != lar)
        {
            sec = arr[i];
        }
    }

    return sec;
}
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "enter  the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = SeclargestElement(arr, n);
    cout << "the largest element:" << ans;
}