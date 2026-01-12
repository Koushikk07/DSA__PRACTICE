#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *back;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};
Node *ConvertArr2Dll(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, mover);
        mover->next = temp;

        mover = mover->next;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// TOTAL SUM OF LINKEDLIST

int totalSum(Node *head)
{
    Node *temp = head;
    int sum = 0;
    while (temp != nullptr)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

// PRINT THE LENGTH
int Length(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// DELETION MECHANISMS

// HEAD DELETION
Node *delHead(Node *head)
{
    Node *newhead = head->next;
    newhead->back = nullptr;
    delete head;
    return newhead;
}

// DELETION OF TAIL
Node *delTail(Node *head)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *newtail = temp->back;
    newtail->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
// Kth Element of the dll

Node *delKthele(Node *head, int k)
{
    if (head == nullptr)
        return head;

    int cnt = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    // we are in the element point
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == nullptr && prev == nullptr)
    {
        return nullptr;
    }
    else if (front == nullptr)
    {
        return delTail(head);
    }
    else if (prev == nullptr)
    {
        return delTail(head);
    }

    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
// INSERTION

// BEFORE

// head

Node *insertHead(Node *head, int val)
{
    Node *newhead = new Node(val, head, nullptr);
    head->back = newhead;

    return newhead;
}

// INsertion before the tail

Node *insertTail(Node *head, int val)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
    }
    Node* newTail = new Node(val,nullptr,temp);
    temp->next=newTail;
    return head;
}
int main()
{
    vector<int> arr = {1, 5, 2, 78, 6, 56, 44};
    Node *head = ConvertArr2Dll(arr);
    print(head);
    // // cout << "Sum of LL:" << totalSum(head) << endl;
    // // Node *newhead = delHead(head);
    // // print(newhead);
    // // cout << "Length of LL: " << Length(head) << endl;
    // // cout << "Length of LL after deletiom: " << Length(newhead) << endl;
    Node *newhead = insertTail(head, 52);
    cout << "After inserting tail: " << endl;
    print(newhead);
   

    return 0;
}