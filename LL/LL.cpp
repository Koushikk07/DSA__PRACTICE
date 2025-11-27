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
        next = nullptr;
    }
};

Node *ArrToLL(vector<int> arr)
{
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        ;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
Node *insertHead(Node *head, int newHead)
{
    Node *temp = head;
    Node *newH = new Node(newHead, head);

    return newH;
}
Node *insertEnd(Node *head, int end)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // cout<<temp->data<<endl;
    Node *newNode = new Node(end);
    temp->next = newNode;
    return head;
}

Node *DeleteHead(Node *head)
{

    Node *newHead = head->next;
    delete head;

    return newHead;
}

Node *DeleteTail(Node *head)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *DelKth(Node *head, int k)
{
    if (k == 1)
    {
        DeleteHead(head);
    }

    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
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
Node* DelKthEle(Node* head,int val)
{
    if(head->data==val)
    {
        DeleteHead(head);
        return head;;
    }

    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr)
    {
        if(temp->data==val)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        return head;

    }
}
int main()
{
    vector<int> arr = {1, 3, 4, 5, 6, 3, 6, 23};
    Node *head = ArrToLL(arr);
    head = DelKthEle(head, 4);
    print(head);
    return 0;
}