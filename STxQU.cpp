#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class st
{
public:
    queue<int> q;

public:
    int push(int x)
    {
        int s = q.size();
        q.push(x);
        for (int i = 1; i <= s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    void pop()
    {
        q.pop();
    }
    int top()
    {
        q.front();
    }
    int size()
    {
        q.size();
    }
};
class Q
{
    stack<int> s1, s2;
    void push(int x)
    {
        while (s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (s2.size())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int top()
    {
        return s1.top();
    }
    void pop()
    {
        cout << " deleted :" << s1.top();
        s1.pop();
    }
    int size()
    {
        return s1.size();
    }
};
int main()
{
}