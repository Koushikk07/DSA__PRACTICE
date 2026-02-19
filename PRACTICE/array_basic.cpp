#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// largest element in an array
int Largest_Element(int arr[], int n)
{
    int lar = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (lar < arr[i])
        {
            lar = arr[i];
        }
    }

    return lar;
}

// Second largest element in an array
int Sec_Ele(int arr[], int n)
{
    int lar = arr[0];
    int sec = -1;
    for (int i = 1; i < n; i++)
    {
        if (lar < arr[i])
        {
            sec = lar;
            lar = arr[i];
        }
        else if (arr[i] > sec && arr[i] < lar)
        {
            sec = arr[i];
        }
    }
    return sec;
}
bool checkSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int Remove_dup(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i;
}

void RotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void RotateD(int arr[], int n, int d)
{
    
    /* int temp[d+1];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i] = temp[i-(n-d)];
    } */

    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}


int main()
{
    int n;
    cout << "Enter the size of an Array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter value at index '" << i << "' :";
        cin >> arr[i];
    }
    cout << endl;
    RotateD(arr, n,3);







    // int ans = Remove_dup(arr, n);
    // cout << "Duplicate elements: " << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}