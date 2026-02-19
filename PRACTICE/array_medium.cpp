#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> UnionArr(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
                i++;
            }
            else
            {
                ans.push_back(arr2[j]);
                j++;
            }
        }
        else if (ans.back() == 0 || ans.back() != arr2[j])
        {
            ans.push_back(arr2[j]);
        }
    }
}

int Missing_Num(vector<int> nums)
{
    // Striver code

    int xor1 = 0, xor2 = 0;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

// Maximum Consecutive Ones
int MaxConOnes(vector<int> arr)
{
    int n = arr.size();
    int maxi = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {

            cnt = 0;
        }
    }
    return maxi;
}

int Repeat(vector<int> arr)
{
    int n = arr.size();
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        Xor = Xor ^ arr[i];
    }
    return Xor;
}

//MEDIUM
// Two Swo

int twoSum(vector<int> arr,int target)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int left =0,right =n-1;
    while(left<=right){
        if(arr[left]+arr[right]== target){
            
        }

    }

}
int main()
{

    vector<int> nums = {1, 1, 2, 3, 3, 4, 4};
    cout<< Repeat(nums);
}