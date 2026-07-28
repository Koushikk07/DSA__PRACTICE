#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int accountBalanceAfterPurchase(int purchaseAmount)
    {

        int amt = purchaseAmount % 10;
        if (amt != 0)
        {
            if (amt >= 5)
            {
                purchaseAmount += 10 - amt;
            }
            else
            {
                purchaseAmount -= amt;
            }
        }
        return 100 - purchaseAmount;
    }
};