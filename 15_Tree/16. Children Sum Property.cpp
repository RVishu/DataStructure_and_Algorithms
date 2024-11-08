#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
 
 bool child_sum(node *root)
 {
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL)
        return true;

    int sum=0;
    if(root->left!=NULL)
        {sum +=root->left->key;}   



 }

 // O(n) and O(h)