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
Node *FindKthNode(Node *temp, int k)
{
    k -= 1;

    // Decrement K until it reaches
    // the desired position
    while (temp != NULL && k > 0)
    {
        // Decrement k as temp progresses
        k--;

        // Move to the next node
        temp = temp->next;
    }

    // Return the Kth node
    return temp;
}

Node *reverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newNode = reverseLL(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newNode;
}
Node *ReverseKth(Node *head, int k)
{
    Node *temp = head;
    Node *prevNode = NULL;
    while (temp != NULL)
    {
        Node *kthNode = FindKthNode(temp, k);
        if (kthNode == NULL)
        {
            if (prevNode != NULL)
            {
            }
            break;
        }
        Node *nextNode = kthNode->next;
        kthNode->next;
        reverseLL(temp);
        if (temp == head)
        {
            head = kthNode;
        }
        else
        {
            prevNode->next = kthNode;
        }
        prevNode = temp;
        temp = nextNode;
    }
    return head;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(9);
    head->next->next->next->next->next = new Node(2);

    // Print the original linked list
    cout << "Original Linked List: ";
    print(head);

    // Reverse the linked list
    head = ReverseKth(head, 4);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    print(head);
}