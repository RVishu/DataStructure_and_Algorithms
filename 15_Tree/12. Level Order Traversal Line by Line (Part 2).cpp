// mrthod 2 of level order traversal
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

void printLevelOrderLine(node *root)
{
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        int count = q.size();
        for(int i=0;i<count;i++)  // important step of putting 
        {
            node *curr= q.front();
            q.pop();
            cout<<(curr->key)<<" ";

        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);

        }
        cout<<"\n";
    }
}