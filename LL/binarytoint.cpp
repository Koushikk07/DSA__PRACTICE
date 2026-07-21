#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {

        ListNode *temp = head;
        string s = "";

        while (temp != NULL)
        {
            s += (temp->val + '0');
            temp = temp->next;
        }

        int ans = std::stoi(s, nullptr, 2);
        return ans;
    }
};