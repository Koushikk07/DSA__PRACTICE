#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int arr[10];
    int topIndex = -1;

    bool push(int val)
    {
        if (topIndex >= 9)
            return false;

        topIndex++;
        arr[topIndex] = val;
        return true;
    }

    bool pop()
    {
        if (topIndex == -1)
            return false;

        topIndex--;
        return true;
    }

    int top()
    {
        if (topIndex == -1)
            return -1;

        return arr[topIndex];
    }

    int size()
    {
        return topIndex + 1;
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