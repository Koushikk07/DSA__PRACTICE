#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Lar(vector<int> arr)
{
    int n = arr.size();
    int largest_element = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest_element)
        {
            largest_element = arr[i];
        } // max(arr[i],arr[i+1]); alternative
    }
    return largest_element;
}

int SecondLar(vector<int> arr)
{
    int n = arr.size();
    int largest = INT_MIN;
    int second_largest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main()
{
    vector<int> arr = {23, 12, 45, 11, 5, 56, 44};
    cout << " Second Largest Element  in array:" << SecondLar(arr) << endl;
    return 0;
}