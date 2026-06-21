#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int cnt = 0;
        int sum = 0;
       
        for (auto it : costs) {
          
            if (sum+it <= coins) {
                sum += it;
                cnt++;
            }
        }
        return cnt;
    }
};