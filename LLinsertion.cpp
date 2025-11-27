#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)

    {
        data = data1;
        next = NULL;
    }
};
Node *covertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *insertHead(Node *head, int value)
{
    Node *temp = new Node(value, head);
    return temp;
}
Node *insertTail(Node *head, int value)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(value, NULL);
    return head;
}
Node *insertKthElement(Node *head, int value, int key)
{
    if (head == NULL)
    {
        Node *head = new Node(value);
        return head;
    }
    if (key == 1)
    {
        Node *temp = new Node(value, head);
        return temp;
    }
    Node *temp = head;
    Node *prev = nullptr;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == (key - 1))
        {
            Node *newNode = new Node(100, temp->next);
            temp->next = newNode;
            break;
        }

        temp = temp->next;
    }
    return head;
}
Node *insertbeforeValue(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == val)
    {
        return new Node(el, head);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {

        if (temp->next->data == val)
        {
            Node *x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {2, 6, 3, 7, 9, 12};
    Node *head = covertArr2LL(arr);
    // head = insertTail(head, 100);
    // head = insertKthElement(head, 100, 2);
    head = insertbeforeValue(head, 100, 7);
    print(head);
}