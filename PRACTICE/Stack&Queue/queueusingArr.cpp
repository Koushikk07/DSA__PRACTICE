#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Queue
{
public:
    int start = -1;
    int end = -1;
    int arr[10];
    int currsize = 0;
    int sizee = 10;

    bool push(int x)
    {
        if (currsize == sizee)
            return false;

        if (currsize == 0)
        {
            start = 0, end = 0;
        }

        arr[end] = x;
        currsize++;
        end++;
        return true;
    }

    bool pop()
    {
        if (currsize == 0)
            return false;
        if (currsize == 1)
        {
            start = end = -1;
        }
        start++;
        currsize--;
        return true;
    }
    int size()
    {
        return currsize;
    }
    int top()
    {
        if (currsize == 0)
            return -1;
        return arr[start];
    }
};

int main()
{
    Queue qk;
    qk.push(10);
    qk.push(20);
    qk.push(30);
    cout << boolalpha;
    cout << "Top of 3 pushes: " << qk.top() << endl;
    cout << "Size of queue: " << qk.size() << endl;
    cout << "pop Status 1:" << qk.pop() << endl;
    cout << "pop Status 2:" << qk.pop() << endl;
    cout << "Top after 2 pops:" << qk.top() << endl;
    cout << "Size of queue: " << qk.size() << endl;
}