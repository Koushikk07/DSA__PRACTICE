#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int largest_element(vector<int> arr)
{
    int lar = INT_MIN;
    for (auto it : arr)
    {
        if (it > lar)
            lar = it;
    }
    return lar;
}
int SecondLar_ele(vector<int> arr)
{
    int lar, slar = INT_MIN;
    for (auto it : arr)
    {
        if (it > lar)
        {
            slar = lar;
            lar = it;
        }
        else if (it > slar && it < lar)
        {
            slar = it;
        }
    }
    return slar;
}
int smallest_element(vector<int> arr)
{
    int sml = INT_MAX;
    for (auto it : arr)
    {
        if (it < sml)
            sml = it;
    }
    return sml;
}
int SecondSmall_ele(vector<int> arr)
{
    int sml, ssmal = INT_MAX;
    for (auto it : arr)
    {
        if (it < sml)
        {
            ssmal = sml;
            sml = it;
        }
        else if (it < ssmal && it > sml)
        {
            ssmal = it;
        }
    }
    return ssmal;
}
bool CheckIfSort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] <= arr[i])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int Remove_dup(vector<int> arr)
{
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
void Remove_dupele(vector<int> arr)
{
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
}
void Left_rotate_one(vector<int> arr)
{
    int n = arr.size();
    int last = arr[0];
    // em ledh bro first manam first element ni oka kada store chesam
    // arr lo una elements in one place mundalaki thiskoni vastham (apudey 1st element remove ipothadhi andhukeu manam adhi store cehstunam)
    // iteration ipogane manam aa element in add chestham last lo THATS :: IT
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = last;
}
void Left_rotate_d(vector<int> arr, int d)
{
    //     reverse(arr,arr+d);
    //     reverse(arr+d,arr+n);
    //     reverse(arr,arr+n);
    // }
}
void Move_all_zeros_end(vector<int> &arr)
{
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int linear_search(vector<int> arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Found at Index: ";
            return i;
        }
    }
    return -1;
}
vector<int> union_arr(vector<int> arr1, vector<int> arr2)
{
    vector<int> uniarr;
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    while (arr1[i] < n && arr2[j] < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (uniarr.size() == 0 || uniarr.back() != arr1[i])
            {
                uniarr.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (uniarr.size() == 0 || uniarr.back() != arr2[j])
            {
                uniarr.push_back(arr2[j]);
            }
            j++;
        }else{
            if(arr1[i]==arr2[j])
            {
                
            if (uniarr.size() == 0 || uniarr.back() != arr1[i])
            {
                uniarr.push_back(arr1[i]);
            }
            i++;
            j++;
            }
        }
    }

    while (i < n)
    {
        if (uniarr.size() == 0 || uniarr.back() != arr1[i])
        {
            uniarr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (uniarr.size() == 0 || uniarr.back() != arr2[j])
        {
            uniarr.push_back(arr2[j]);
        }
        j++;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 78};
    vector<int> arr1 = {2, 2, 4, 6, 7, 11, 14, 78};
    // vector<int> arr = {0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 3, 3};

    // //  Remove_dupele(arr);
    // // //  for(int i = 0; i < n; i++)
    // // // {
    // // //     cout << arr[i] << " ";
    // // // }
    //// Left_rotate_one(arr);
    ////Move_all_zeros_end(arr);

    // // for (auto it : arr)
    // // {
    // //     cout << it << " ";
    // // }
    vector<int> ans = union_arr(arr, arr1);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    ////cout << linear_search(arr, 2);
    // // cout << endl;
    // // return 0;
    // // cout << "LARGEST ELEMENT : " << largest_element(arr) << endl;
    // // cout << "SECOND LARGEST ELEMENT : " << SecondLar_ele(arr) << endl;
    // // cout << "SMALLEST ELEMENT : " << smallest_element(arr) << endl;
    // // cout << "SECOND SMALLEST ELEMENT : " << SecondSmall_ele(arr) << endl;
    // // cout<<CheckIfSort(arr);

    return 0;
}