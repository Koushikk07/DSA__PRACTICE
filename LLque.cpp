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
Node *convertArr2LL(vector<int> &arr)
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
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
Node *middleEle(Node *head)
{
    int len = lengthOfLL(head);
    int mid = (len / 2) + 1;
    int cnt = 1;
    Node *temp = head;
    while (cnt != mid)
    {
        cnt++;
        temp = temp->next;
    }
    return temp;
}
Node *middleEleOpt(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *revIt(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    head = new Node(st.top());
    st.pop();
    Node *mover = head;
    while (!st.empty())
    {
        Node *temp = new Node(st.top());
        st.pop();
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node *revItOptimal(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
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
int main()
{
    vector<int> arr = {2, 6, 3, 78, 12, 4};
    Node *head = convertArr2LL(arr);
    head = reverseLL(head);

    print(head);
}