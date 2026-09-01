#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class Stack
{
public:
    node *Top;
    int sizee = 0;
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = Top;
        Top = temp;

        sizee = sizee + 1;
    }

    void pop()
    {
        if (Top == nullptr)
            return;
        node *temp = Top;
        Top = Top->next;
        delete temp;
        sizee--;
    }

    int top()
    {
        if (Top == nullptr)
            return -1;
        return Top->data;
    }
    int size()
    {
        return sizee;
    }
};

int main()
{

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();

    cout << "Top after pop: " << st.top() << endl;
    cout << "Size after pop: " << st.size() << endl;

    return 0;
}