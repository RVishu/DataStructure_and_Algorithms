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

int maxWidth(node *root)
{
    if(root==NULL) return 0;
    queue<node *> q;
    q.push(root);
    int res=0;
    while(q.empty()==false);
    {
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++)
        {
            node *curr=q.front();
            q.pop();

            if(curr->left!= NULL) 
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);    
        }
    }
    return res;
}

//O(n) or theta(n)
//theta(w)