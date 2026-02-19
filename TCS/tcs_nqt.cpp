#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void MoveZerosEnd(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;

    for (auto it : arr)
    {
        if (it != 0)
        {
            ans.push_back(it);
        }
    }
    int m = ans.size();
    for (int i = 0; i < n - m; i++)
    {
        ans.push_back(0);
    }

    for (auto a : ans)
    {
        cout << a << " ";
    }
}

int StringCount(string s)
{
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
            cnt1++;
        else if (s[i] == '*')
            cnt2++;
    }

    cout<<cnt2-cnt1<<endl;
}
int greater_count(vector<int> arr){
    int n = arr.size();

    if(arr.size()==0 || arr.size()==1) return n;

    int cnt=1;
    int maxi = arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]>maxi){
        cnt++;
        maxi = arr[i];

    }
}
return cnt;
}

char Out_odd(vector<char> arr){
    char Xor;

    for(int i=0;i<arr.size();i++)
    {
        Xor=Xor^arr[i];
    }
    return Xor;

}


int main()
{
   // vector<int> arr = {4, 5, 0, 1, 9, 0, 5, 0};
    //MoveZerosEnd(arr);
    //return -1;

   /*  vector<int> arr={7,4,8,2,9};
    cout<<greater_count(arr); */ 
    vector<char> arr = {'a','a','b','b','c','d','d'};
    cout<<Out_odd(arr);
}