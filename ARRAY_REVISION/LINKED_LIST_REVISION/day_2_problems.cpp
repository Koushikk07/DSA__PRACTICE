#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
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

Node *covertArr2LL(vector<int> arr)
{
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; // mover=mover.next;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
// length of an ll
int length_ll(Node *head)
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
// PROBLEMS

// middle of LL(slow and fast )

int mid_ll(Node *head)
{

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

/* //ITERATIVE
Node* reverse_ll(Node* head)
{
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr)
    {
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
} */

// RECURSIVE
// must do dry run ,eaten my soul
Node *reverse_ll(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    Node *newhead = reverse_ll(head->next);

    Node *front = head->next;
    front->next = head;
    head->next = nullptr;

    return newhead;
}

bool detect_loop(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast) return true;

    }
    return false;

}
int main()
{
    vector<int> arr = {1, 2, 3, 34, 4, 5, 8, 6};
    Node *head = covertArr2LL(arr);
    print(head);
    /* Node *newhead = reverse_ll(head);
    print(newhead); */

    

    return 0;
}