#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {

        ListNode *temp = head;

        while (temp->next != NULL)
        {
            int ans = gcd(temp->val, temp->next->val);
            ListNode *Hnode = new ListNode(ans, temp->next);
            temp->next = Hnode;
            temp = temp->next->next;
        }

        return head;
    }
};