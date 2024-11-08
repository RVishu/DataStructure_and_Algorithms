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

void Preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<(root->key)<<" ";
        Preorder(root->left);
        
        Preorder(root->right);
    }
}

// time complexicity = O(n)
// space complexicity = O(h)