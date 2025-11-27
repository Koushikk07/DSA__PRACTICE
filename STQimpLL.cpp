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
        next1 = next;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
};
class st
{
    Node *top;
    int size = 0;
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        size += 1;
    }
    void pop()
    {
        Node *temp = top;
        top = top->next;

        delete temp;
        size -= 1;
    }
    int top()
    {
        return top->data;
    }
    int size()
    {
        return size;
    }
};
class que
{
    public:
    Node* start;
    Node* end;
    int size=0;
    public:
    void push(int x)
    {
        Node* temp=new Node(x);
        if(start == NULL)
        {
            start=end=temp;
        }else{
            end->next=temp;
        }
        size+=1;
    }
    void pop()
    {
        if(start == NULL) cout<<"empty";
        Node* temp=start;
        start=start->next;
        delete temp;
        size-=1;
    }
     int top(){
        if(start==NULL)
        {
            return -1;
        }else{
            return start->data;
        }
     }
     int size()
     {
        if(size==0) return -1;
        else return size;
     }
};
int main()
{
}