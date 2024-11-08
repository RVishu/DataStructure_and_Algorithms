// size of binary tree= No. of nodes

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

int getSize(node *root)
{
    if(root==NULL) return 0;
    else
    {
        return 1+ getSize(root->left)+getSize(root->right);
    }
}

// O(n) and O(h)

// for recursive -> use queue == > O(n) and O(w)