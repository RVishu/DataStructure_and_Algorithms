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

void ceiling(node *root,int x)
{
    if(root==NULL) return;

    node *res = NULL;
    while(root!=NULL)
    {
        if(root->key==x)
            cout<<root->key;

        if(x>root->key)
        {
            root=root->right;
        }    
    }
}