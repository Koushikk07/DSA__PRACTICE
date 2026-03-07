#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } */
    // 2nd way

    /*  int n;
     cin >> n;
     vector<int> arr;
     for (int i = 0; i < n; i++)
     {
         int x;
         cin >> x;
         arr.push_back(x);
     }
     cout << endl;
     for (int ele : arr)
     {
         cout << ele << " ";
     } */

    // 3rd way no size

    /*   string str;
      getline(cin, str);
      cout<<str;
      vector<int> arr;

      stringstream ss(str);
      string num;
      while (getline(ss, num, ' '))
      {
          arr.push_back(stoi(num));
      }

      for (int ele : arr)
      {
          cout << ele << " ";
      } */

    /* string str;
    getline(cin,str);
    vector<int> arr;

    stringstream ss(str);
    string num;
    while(getline(ss,num,',')){
        arr.push_back(stoi(num));

    }

    for(int ele:arr){
        cout<<ele<<" ";
    } */

    // with brackets

    /* string str;
    getline(cin, str);
    if (str.front() == '{' && str.back() == '}')
    {
        str = str.substr(1, str.length() - 2);
    }

    vector<int> arr;
    stringstream ss(str);
    string num;

    while (getline(ss, num, ','))
    {
        arr.push_back(stoi(num));
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    } */

    /* int n;
    cin >> n;
    //cin.ignore();
    string s;
    getline(cin, s);
    cout << n << " " << s; */

    
}