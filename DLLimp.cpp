#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

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
Node *deleteHead(Node *head)
{
    Node *prev = head;
    head = head->next;
    prev->next = nullptr;
    head->back = nullptr;
    delete prev;
    return head;
}
Node *deleteTail(Node *head)
{
    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
Node *deleteKthElement(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;

        if (cnt == k)
        {
            break;
        }

        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == NULL && front == NULL)
    {
        delete temp;
        return head;
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

    if (front == NULL)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    delete temp;
}
// beforeNode insertion of new node
Node *insertHead(Node *head, int val)
{
    Node *newNode = new Node(val, head, nullptr);
    head->back = newNode;
    return newNode;
}
// insert after head
Node *insertAfterHead(Node *head, int val)
{
    Node *newNode = new Node(val, head->next, head);
    head->next = newNode;
    head->next->back = newNode;

    return head;
}
// insert before tail
Node *insertTail(Node *head, int val)
{
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}
// insert after tail
Node *insertAfterTail(Node *head, int val)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val, nullptr, temp);
    temp->next = newNode;
    return head;
}
// insert before kthElement
Node *insertKthElement(Node *head, int val, int k)
{
    if (k == 1)
    {
        return insertHead(head, val);
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt = cnt + 1;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
// insert after the kth element
Node *insertAfterKthElement(Node *head, int val, int k)
{
    if (k == 1)
    {
        return insertAfterHead(head, val);
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt = cnt + 1;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *front = temp->next;
    Node *newNode = new Node(val, front, temp);
    temp->next = newNode;
    front->back = newNode;
    return head;
}
// insert before node
void insertNode(Node *node, int val)
{
    Node *prev = node->back;
    Node *newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}
// insert after node
void insertAfterNode(Node *temp, int val)
{
    Node *front = temp->next;
    Node *newNode = new Node(val, front, temp);
    temp->next = newNode;
    front->back = newNode;
}
Node *reverseNode(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *current = head;
    while (current != NULL)
    {
        prev = current->back;
        current->back = current->next;
        current->next = prev;

        current = current->back;
    }
    return prev->back;
}
int main()
{
    vector<int> arr = {3, 5, 12, 7, 9, 5};
    Node *head = convertArr2Dll(arr);
    // head = deleteKthElement(head, 4);
    // deleteNode(head->next->next);
    // head = insertAfterKthElement(head, 99, 2);
    // insertAfterNode(head->next, 44);
    head = reverseNode(head);
    print(head);
}
