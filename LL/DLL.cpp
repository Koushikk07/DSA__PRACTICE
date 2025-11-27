#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *back;
    Node *next;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *ConArrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

Node *DelHead(Node *head)
{
    Node *newHead = head->next;
    head->next = nullptr;
    newHead->back = nullptr;
    delete head;
    return newHead;
}

Node *delTail(Node *head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newTail = temp->back;
    newTail->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
Node *delKth(Node *head, int k)
{
    Node *temp = head;
    Node *front = head;
    Node *prev = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = front;
            front->back = prev;
            temp->back = nullptr;
            temp->next = nullptr;
            delete temp;
            break;
        }
        temp = temp->next;
        prev = temp->back;
        front = temp->next;
    }
    return head;
}
int MidVal(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5,7,9};
    Node *head = ConArrToDLL(arr);
    int ans = MidVal(head);
    cout << ans;
}