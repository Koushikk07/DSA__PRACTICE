#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
    public:
    TreeNode *left;
    TreeNode *right;
    int data;
    public:
    TreeNode(int val)
    {
        data=val;
        left=right=NULL;
    }

};

int main()
{
    TreeNode *root = new TreeNode(10);
   root->left=new TreeNode(11);
   root->right=new TreeNode(12);
   cout<<root->data<<"->";
   cout<<root->left->data<<"->";
   cout<<root->right->data<<"->";



}