// - breadth first(OR level order)

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
// to find height
int Height(node *root)
{
    
    if(root==NULL) return 0;
    else
    

    return max(Height(root->left),Height(root->right))+1;
}  
// Concept - first find height of binary tree then use Print node at k distance
void PrintLevel(node *root,int k)
{
    if(root==NULL){return;}
    else
    {
        cout<<(root->key)<<" ";
        PrintLevel(root->left,k-1);
        PrintLevel(root->right,k-1);

    }
}
// the time complexicity = O(nh) h for height 

// we enquene level on the queue 
void PrintLevelOrder(node *root)
{
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        node *curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);    
    } 
}

//theta(n) and O(n) or theta(w) where w is width of binary tree.