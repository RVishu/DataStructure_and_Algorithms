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

int height(node *root)
{
    if(root==NULL) return 0;

    return max(height(root->left),height(root->right))+1;
}

void Print_Sprial(node *root)
{
    if(root==NULL) return;
    queue <node *> q;
    stack<node *> s;


}

