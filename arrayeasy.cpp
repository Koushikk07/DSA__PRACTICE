#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int secondLarEle(int arr[], int n)
{
    int largest = arr[0];
    int slarge = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slarge = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slarge)
        {
            slarge = arr[i];
        }
    }
    cout << slarge;
}
int secondSmallest(int arr[], int n)
{
    int small = arr[0];
    int ssmall = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            ssmall = small;
            small = arr[i];
        }
        else if (arr[i] != small && arr[i] < ssmall)
        {
            ssmall = arr[i];
        }
    }
    cout << ssmall;
}
int arrIsSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int removedup(int arr[], int n)
{
    /* int i=0;
     for(int j=1;j<n;j++)
     {
         if(arr[j]!=arr[i])
         {
             i++;
             arr[i+1]= arr[j];

         }
     }
     return (i+1);*/
    vector<int> temp;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp.push_back(arr[i]);
        }
    }
    for (auto it : temp)
    {
        cout << it << "  ";
    }
}
int leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n] = temp;
}
int leftRotateByD(int arr[], int n, int d)
{
    /* d=d%n;
     int temp[d];
     for(int i=0;i<d;i++)
     {
         temp[i]=arr[i];
     }
     for(int i=d;i<n;i++)
     {
         arr[i-d]=arr[i];

     }
     for(int i=n-d;i<n;i++)
     {
         arr[i]=temp[i-(n-d)];
     }*/

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
int moveAllZeros(int arr[], int n)
{
    vector<int> temp;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i <= nz; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = nz; i <= n; i++)
    {
        arr[i] = 0;
    }
}
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}
vector<int> unionOfTwoArray(vector<int> &a, int n1, vector<int> &b, int n2)
{
    n1 = a.size();
    n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
        while (i < n1)
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        while (j < n2)
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    return unionArr;
}

int main()
{
    int n = 7;
    int arr[n] = {1, 1, 2, 0, 0, 3, 3, 1};
    moveAllZeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}