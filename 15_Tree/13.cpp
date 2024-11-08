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
// mine solution
int size(node *root)
{
    if(root==NULL) return 0;
    
    if(root->left==NULL && root->right==NULL)
        return 1;

     return size(root->left)+size(root->right)+1;   
}

