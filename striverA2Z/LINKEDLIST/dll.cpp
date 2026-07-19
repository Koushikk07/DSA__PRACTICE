#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

public:
    node(int data1, node *next1, node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

node *covertArr2Dll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *mover = new node(arr[i], nullptr, temp);
        temp->next = mover;
        temp = temp->next;
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
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 43, 4, 5};
    node *head = covertArr2Dll(arr);
    print(head);
}