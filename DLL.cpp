#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *back;
    int data;
    Node *next;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back1 = back;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *convertArr2Dll(vector<int> &arr)
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

    while (head != nullptr)
    {
        cout << head->data << " ";

        head = head->next;
    }
}
Node *deleteTail(Node *head)
{
    Node *temp = head;

    while (temp->next != nullptr)
    {

        temp = temp->next;
    }
    Node *newPrev = temp->back;
    newPrev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
Node *deleteHead(Node *head)
{
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    return head;
}
Node *deleteKth(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == nullptr && front == nullptr)
    {

        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deleteHead(head);
    }
    else if (front == nullptr)
    {
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}
void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;
    if (front == nullptr)
    {
        prev->next = nullptr;
        front->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    delete temp;
}

int main()
{
    vector<int> arr = {4, 7, 3, 7, 12};
    Node *head = convertArr2Dll(arr);
    // cout << deleteHead(head)->data;
    // head = deleteKth(head, 3);
    deleteNode(head->next);
    print(head);
    return 0;
}
