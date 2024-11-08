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


bool findPath(node *root,vector<node *> &p,int n)
{
    if(root==NULL) return false;
    p.push_back(root);
    if(root->key==n) return true;
    if(findPath(root->left,p,n) || findPath(root->right,p,n))
    return true;

    p.pop_back();
    return false;
}

node *Lca(node *root,int n1,int n2)
{
    vector<node *> path1,path2;

    if(findPath(root,path1,n1)==false || findPath(root,path2,n2)==false)

    return NULL;

    for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++)
    if(path1[i+1]!=path2[i+1])
        return path1[i];

    return NULL;    
}

// theta (n) + theta(n)+O(n) == they are only time complexicity
// O(n) space complexicity