#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

// int two_sum(vector<int> arr, int target)
//{
/* /*  sort(arr.begin(), arr.end());
 int n = arr.size();
 int left = 0, right = n - 1;

 while (left < right)
 {
     int sum = arr[left] + arr[right];
     if (sum == target)
     {

    // }//else if (sum > target)
     {
         right--;
     }
     else
     {
         left++;
     }
 }
return -1; */
//}

// bruteforce
// majortity elem
int majority_element(vector<int> arr)
{
   /*  unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > (arr.size() / 2))
        {
            return it.first;
        }
    }
    return -1; */

    int cnt=0,ele;
    int n=arr.size();
    //this is for keeping track for the whether ele is a num or not if not we are assigning or else we check whether it has or not yb comparing with arr[i]
    //if not both then cnt--;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            ele=arr[i];
        }else if(arr[i]==ele)
        {
            cnt++;
        }else{
            cnt--;
        }


    }

return ele;

}

int main()
{
    //     vector<int> arr = {2, 3, 5, 6, 65, 34, 2, 12, 23};
    //     int target = 7;
    //    // cout << two_sum(arr, target);
    //    vector<vector<int>> arr = {{1,2,3,5},{4,5,6},{7,8,9}};
    //    cout<<arr[0].size();
    //     return 0;
    /* int cnt =0;
    for(int i=1;i<10;i++)
    {
        cnt++;
        if(cnt==4){cout<<endl; cnt=1;}
        cout<<i<<" ";
    }
    } */

    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    cout << majority_element(arr);
}
