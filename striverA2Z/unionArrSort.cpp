#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> unionArrTwoArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> temp;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            if (temp.size() == 0 || temp.back() != a[i])
            {
                temp.push_back(a[i]);
            }
            i++;
        }
        else if (a[i] > b[j])
        {
            if (temp.size() == 0 || temp.back() != b[j])
            {
                temp.push_back(b[j]);
            }
            j++;
        }
        else
        {
            if (temp.size() == 0 || temp.back() != a[i])
                temp.push_back(a[i]);
            i++;
            j++;
        }
    }
    while (i < n1)
    {

        if (temp.size() == 0 || temp.back() != a[i])
        {
            temp.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (temp.size() == 0 || temp.back() != b[j])
        {
            temp.push_back(b[j]);
        }
        j++;
    }
    return temp;
}

int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 6, 7};
    vector<int> ans = unionArrTwoArray(a, b);
    cout << "Union of Two array: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}