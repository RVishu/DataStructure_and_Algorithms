 
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

void printLevelOrderLinebyline(node *root)
{   
    if(root==NULL) return;
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        node *curr= q.front();
        q.pop(); 
        if(curr==NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL) q.push(curr->left);
         if(curr->right!=NULL) q.push(curr->right);
    }
} 

//time complexicity = O(n+h)  , as = theta(w)== O(n)