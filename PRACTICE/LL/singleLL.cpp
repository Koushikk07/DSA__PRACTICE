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

node *arr2ll(vector<int> arr)
{
    int n = arr.size();
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < n; i++)
    {
        node *dt = new node(arr[i]);
        temp->next = dt;
        temp = temp->next;
    }
    return head;
}

void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

node *newHead(node *head, int Data)
{
    node *newH = new node(Data, head);
    return newH;
}

node *newTail(node *head, int tail)
{
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new node(tail);
    return head;
}

bool search(node *head, int target)
{
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

node *KthNode(node *head, int k, int val)
{
    int cnt = 1;
    node *temp = head;
    node *front = temp->next;
    while (temp->next != nullptr)
    {
        if (cnt == k)
        {
            temp->next = new node(val, front);
            break;
            return head;
        }
        temp = temp->next;
        front = front->next;
        cnt++;
    }
    return head;
}

// DELETION

node *delete_Head(node *head)
{
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *delete_Tail(node *head)
{
    node *temp = head;
    while (temp->next->next != nullptr)

    {
        temp = temp->next;
    }
    node *tail = temp->next;
    temp->next = nullptr;
    delete tail;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8};

    node *head = arr2ll(arr);
    cout << "Arry converted to Linkedlist: ";
    print(head);
    // new head inserted
    cout << "After insertion of Head: ";
    node *newH = newHead(head, 21);
    print(newH);
    // new tail inserted
    cout << "After insertion of Tail: ";
    node *newT = newTail(head, 22);
    print(newT);
    // Searcing an element in ll
    cout << "Search Status: ";
    cout << boolalpha;
    cout << search(head, 5);
    cout << endl;
    // insert at kth position
    cout << "After insertion of Kth Position: ";
    node *khead = KthNode(head, 3, 99);
    print(khead);

    // DELETION
    cout << "After Deletion of Head:";
    node *DelHead = delete_Head(head);
    print(DelHead);

    cout << "After Deletion of Tail:";
    node *DelTail = delete_Tail(head);
    print(DelTail);
}