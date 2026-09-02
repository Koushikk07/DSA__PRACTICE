#include <iostream>
#include <bits/stdc++.h>
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

class Queue
{
public:
    node *start = nullptr;
    node *end = nullptr;
    int sizee = 0;

    bool push(int x)
    {
        node *temp = new node(x);

        if (start == nullptr)
        {
            start = end = temp;
        }
        else
        {
            end->next = temp;
            end = temp; // important
        }

        sizee++;
        return true; // important
    }

    bool pop()
    {
        if (start == nullptr)
            return false;

        node *temp = start;
        start = start->next;

        delete temp;
        sizee--;

        if (start == nullptr)
            end = nullptr; // important

        return true; // important
    }

    int size()
    {
        return sizee;
    }

    int top()
    {
        if (start == nullptr)
            return -1;

        return start->data;
    }
};

int main()
{
    Queue que;
    cout << boolalpha << endl;
    cout << "Elements pushed status:" << que.push(1) << endl;
    cout << "Elements pushed status:" << que.push(12) << endl;
    cout << "Elements pushed status:" << que.push(23) << endl;
    cout << "Elements pushed status:" << que.push(34) << endl;
    cout << "Top of queue: " << que.top() << endl;
    cout << "Size of queue: " << que.size() << endl;
    cout << "Pop status: " << que.pop() << endl;
    cout << "Pop status: " << que.pop() << endl;
    cout << "Top of queue: " << que.top() << endl;
    cout << "Size of queue: " << que.size() << endl;
}