#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str)
{
    stack<int> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
                return false;

            char ch = s.top();

            if ((str[i] == ')' && ch == '(') || (str[i] == ']' && ch == '[') || (str[i] == '}' && ch == '{'))
                s.pop();
            else
                return false;
        }
    }
    return s.empty();
}

int main()
{
    string str = "{[()]}";

    cout << boolalpha << isBalanced(str);

    return 0;
}