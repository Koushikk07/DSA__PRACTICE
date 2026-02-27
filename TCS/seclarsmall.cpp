#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Sec_lar_small(int arr[], int n)
{
    int lar = INT_MIN, small = INT_MAX, s_small = 0, s_lar = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            s_lar = lar;
            lar = arr[i];
        }
        else if (arr[i] < small)
        {
            s_small = small;
            small = arr[i];
        }
        else if (arr[i] < lar && arr[i] > s_lar)
        {
            s_lar = arr[i];
        }
        else if (arr[i] > small && arr[i] < s_small)
        {
            s_small = arr[i];
        }
    }

    cout<<s_lar<<" "<<s_small;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Sec_lar_small(arr,n);
}