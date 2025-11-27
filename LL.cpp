#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
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
Node *convertArr(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        // cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
bool checkIf(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return true;
        else
        {
            temp = temp->next;
        }
    }
    return false;
}
Node *deleteHead(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
Node *deleteKthElement(Node *head, int key)
{
    if (head == NULL)
        return head;
    if (key == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == key)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *removeElement(Node *head, int element)
{
    if (head == NULL)
        return nullptr;
    if (head->data == element)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {

        if (temp->data == element)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main()

{
    vector<int> arr = {2, 5, 6, 7, 8, 8};
    Node *head = convertArr(arr);
    // cout << lengthOfLL(head);
    // print(head);
    // cout << checkIf(head, 11);
    // cout << deleteHead(head)->data;
    // deleteTail(head);
    removeElement(head, 7);
    print(head);
}