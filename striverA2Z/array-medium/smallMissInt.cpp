#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> mpp(nums.begin(), nums.end());
        int sum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) sum += nums[i];
            else break;
        }

        while (mpp.count(sum))
            sum++;

        return sum;
        
    }
};