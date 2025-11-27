#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

class staImp
{
public:
    int top = -1;
    int st[10];
    void push(int x)
    {
        if (top >= 10)
            return;
        top = top + 1;
        st[top] = x;
    }

    int top()
    {
        if (top == -1)
            return -1;
        else
            return st[top];
    }
    void pop()
    {
        if (top == -1)
            return;
        top = top - 1;
    }
    int size()
    {
        return top + 1;
    }
};
class queueImp
{
    public:
    int cursize = 0;
    int start = -1, end = -1;
    int siz=10;
    int que[10];

    int push(int x)
    {
        if(cursize==siz) return -1;
        if(cursize==0)
        {
            start=0,end=0;
        }else{
            end=(end+1)%siz;
            que[end]=x,cursize=cursize+1;
        }
    }

    int pop()
    {
        if(cursize==-1) return -1;
        end = que[start];
        if(cursize==1)
        {
            start=end-1;
        }else start=(start+1)%siz;

        cursize-=1;
    }

    int top()
    {
        if(cursize==0) return -1;
        return que[start];
    }
    int size()
    {
        return cursize;
    }
};
class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;

    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

};

class stackLL
{
  Node* top;
  int size=0;

    void push(int x)
    {
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
        size+=1;
    }
    void pop()
    {
        Node* temp=top;
        top=top->next;
        delete temp;
        size-=1;
    }

};
int main()
{
}