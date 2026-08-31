#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

public:
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node *convertArr2Dll(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node *newNode = new node(arr[i], nullptr, temp);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

int searchAtindex(node *head, int target)
{
    int index = 0;
    node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            return index;
        }
        index++;
        temp = temp->next;
    }
    return -1;
}

node *insertHead(node *head, int value)
{
    node *newHead = new node(value, head, nullptr);
    head->back = newHead;
    return newHead;
}

node *insertTail(node *head, int value)
{
    node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *newTail = new node(value, nullptr, temp);
    temp->next = newTail;

    return head;
}

node *insertAtKthPos(node *head, int val, int k)
{
    if (k == 0)
        return insertHead(head, val);
    node *temp = head;
    int cnt = 1;
    while (temp != nullptr)
    {
        if (cnt == k)
        {
            node *front = temp->next;
            node *newNode = new node(val, front, temp);
            temp->next = newNode;
            front->back = newNode;
        }
        cnt++;
        temp = temp->next;
    }
    return head;
}

// Deletion

node *delete_head(node *head)
{
    if (head->next == nullptr)
        return nullptr;

    node *newHead = head->next;
    newHead->back = nullptr;
    head->next = nullptr;
    free(head);
    return newHead;
}

node *delete_tail(node *head)
{
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->back->next = nullptr;

    delete temp;
    return head;
}

node *deleteAtkthPos(node *head, int k)
{
    int cnt = 0;
    node *temp = head;
    if (k == 0)
        return delete_head(head);

    while (temp != nullptr)
    {
        if (cnt == k)
        {
            temp->back->next = temp->next;
            temp->next->back = temp->back;
            delete temp;
            return head;
        }
        cnt++;
        temp = temp->next;
    }
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = convertArr2Dll(arr);
    cout << "After Converting Arr2DLL: ";
    print(head);
    cout << boolalpha;
    cout << "Search Status:";
    cout << search(head, 5);
    cout << endl;
    cout << "Element Found at index: ";
    cout << searchAtindex(head, 5);
    cout << endl;
    cout << "After inserting new Head: ";
    node *new_Head = insertHead(head, 99);
    print(new_Head);
    cout << "After inserting new Tail: ";
    node *new_Tail_head = insertTail(head, 88);
    print(new_Tail_head);
    cout << "after inserting element in Kth position: ";
    node *new_Head_kth = insertAtKthPos(head, 12, 3);
    print(new_Head_kth);

    cout << "DELETION" << endl;

    node *new_del_head = delete_head(head);
    cout << "After Deleting Head: ";
    print(new_del_head);

    // //node *new_del_tail_head = delete_tail(head);
    ////cout << "After Deleting Tail: ";
    ////print(new_del_tail_head);
}