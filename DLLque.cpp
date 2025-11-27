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
    while (head != NULL)
    {
        cout << head->data << "->";
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
    return temp;
}
Node *deleteAllOccKey(Node *head, int key)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            if (temp == head)
            {
                head = temp->next;
            }
            Node *front = temp->next;
            Node *prev = temp->back;
            if (front != NULL)
                front->back = prev;
            if (prev != NULL)
                prev->next = front;
            delete temp;
            temp = front;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
vector<pair<int, int>> sumPairs(Node *head, int sum)
{
    Node *first = head;
    Node *last = deleteTail(head);
    vector<pair<int, int>> pr;
    while (first <= last)
    {
        if (first->data + last->data == sum)
        {
            pr.push_back({first->data, last->data});
            first = first->next;
            last = last->next;
        }
        else if (first->data + last->data < sum)
        {
            first = first->next;
        }
        else
        {
            last = last->back;
        }
    }
    return pr;
}
Node *removeDuplicates(Node *head)
{
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *nextNode = temp->next;
        while (nextNode != NULL && nextNode->data == temp->data)
        {
            nextNode = nextNode->next;
        }
        temp->next = nextNode;
        if (nextNode != NULL)
            nextNode->back = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {6, 21, 45, 21, 67, 21, 12, 8};
    Node *head = convertArr2Dll(arr);

    print(head);
}