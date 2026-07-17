#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node *covertArr2LL(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node *nNode = new node(arr[i]);
        temp->next = nNode;
        temp = nNode;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

// DELETION

// head

node *deleteHead(node *head)
{
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// tail

node *deleteTail(node *head)
{
    node *temp = head;
    node *tail = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
        tail = temp->next;
    }
    temp->next = nullptr;
    delete tail;
    return head;
}

node *deleteKthElement(node *head, int k)
{
    int cnt = 0;
    node *temp = head;
    node *knode = head;
    while (temp->next != nullptr)
    {
        cnt++;
        knode = knode->next;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    temp->next = temp->next->next;
    delete knode;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = covertArr2LL(arr);
    // node *newHead = deleteHead(head);
    // node *newHead = deleteTail(head);
    node *newHead = deleteKthElement(head, 3);
    print(head);
    cout << endl;
    print(newHead);
    cout << head << endl;
    cout << newHead << endl;
    return 0;
}