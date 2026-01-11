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

// delete a head

Node *del_head(Node *head)
{

    Node *newhead = head->next;
    return newhead;
}
// delete a tail
Node *del_tail(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
// delete kth element in ll
Node *kthDelEle(Node *head, int k)
{
    Node *temp = head;
    if (temp == nullptr)
        return head;
    if (k == 1)
        return del_head(head);
    int cnt = 0;
    Node *prev = nullptr;
    while (temp != nullptr)
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

// delete kth value in ll
Node *kthval(Node *head, int val)
{
    Node *temp = head;
    Node *prev = nullptr;
    if (temp->data == val)
    {
        return del_head(head);
    }
    while (temp != nullptr)
    {
        if (temp->next->data == val)
        {

            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}
// INSERTION

// insert head
Node *ins_head(Node *head, int val)
{
    Node *newHead = new Node(val);
    newHead->next = head;
    return newHead;
}
// insert tail
Node *ins_tail(Node *head, int val)
{
    Node *temp = head;
    Node *newtail = new Node(val);
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newtail;
    return head;
}
// INSERTION BEFORE kth position

Node *ins_kth(Node *head, int k, int el)
{
    Node *temp = head;

    if (k == 1)
        return ins_head(head, el);
    int cnt = 0;
    
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k - 1)
        {

            Node *x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
       
        temp = temp->next;
    }
    return head;
}

//INSERT BEFORE THE VALUE

Node* ins_val(Node* head,int val,int el)
{
    Node *temp = head;
   
    if (temp->data == val)
    {
        return ins_head(head,el);
    }
    while (temp != nullptr)
    {
        if (temp->next->data == val)
        {

           Node* x=new Node(el,temp->next);
           temp->next=x;
           break;
        }
        temp = temp->next;
    }
    return head;

}
//AFTER INSERTION 

//after kth ele insertion

Node *ins_kth_after(Node *head, int k, int el)
{
    Node *temp = head;

    if (k == 1)
        return ins_head(head, el);
    int cnt = 0;
    
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {

            Node *x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
       
        temp = temp->next;
    }
    return head;
}
//insert after val
Node* ins_val_after(Node* head,int val,int el)
{
    Node *temp = head;
   
    if (temp->data == val)
    {
        return ins_head(head,el);
    }
    while (temp != nullptr)
    {
        if (temp->data == val)
        {

           Node* x=new Node(el,temp->next);
           temp->next=x;
           break;
        }
        temp = temp->next;
    }
    return head;

}
int main()
{
    vector<int> arr = {5, 17, 3, 4, 32, 21};
    Node *head = covertArr2LL(arr);
    print(head);
    Node *newhead = ins_val_after(head, 4,7);
    print(newhead);

    /*  int ans= length_ll(head);
     cout<< ans; */
}