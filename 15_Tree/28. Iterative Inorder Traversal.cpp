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

void iterativeInorder(node *root)
{
    stack<node *> s;
    node *curr=root;
    while(curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;

        }
        curr=s.top();s.pop();
        cout<<(curr->key)<<" ";
        curr=curr->right;
    }
}

// theta(n) and O(h )