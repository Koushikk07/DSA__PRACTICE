#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class st
{
    public:
    int top=-1;
    int st[10];
    public:
    void push(int x)
    {
        if(top>=10)
        {
            top=top+1;
            st[top]=x;

        }

    }
    int top()
    {
        if(top==-1) return NULL;
        else return st[top];
    }

    void pop()
    {
        if(top==-1) cout<<"empty";
        else{
            top=top-1;
        }

    }
    int size()
    {
        return top+1;
    }

};
class queue
{
    public:
    int siz=10;
    int que[10];
    int curSiz=0,start=-1,end=-1;
    public:
    void push(int x)
    {
        if(curSiz==siz) cout<<"full";
        if(curSiz==0)
        {
            start=0,end=0;
        }else{
            end=(end+1) % siz;
        }
        que[end]=x,curSiz+=1;
    }
    int pop()
    {
        if(curSiz == 0 ) cout<<"empty";
        int ele=que[start];
        if(curSiz==1)
        {
            start=end=-1;
        }else{
            start=(start+1)%siz;
        }
        curSiz-=1;
        return ele;
    }
    int top()
    {
        if(curSiz==0) return -1;
        return que[start];
    }
    int size()
    {
        return curSiz;
    }

};
int main()
{

}