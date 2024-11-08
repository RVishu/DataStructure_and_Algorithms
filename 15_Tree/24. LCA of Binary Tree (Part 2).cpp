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

/*
EFFICIENT SOLUTION

    1- require one traversal and theta(h) extra space for the recueresive traversal
    2- assumes that both n1 and n2 exists in the tree. does not give correct result when only one (n1 or n2) exist

IDEA FOR THE SOLUTION

    we do noraml recursive traversal we have the following cases for every node.
        1-if it is same as n1 or n2.
        2-if one of its subtrees contains n1 and other contains n2.
        3-if one of its subtree contains both n1 and n2.
        4-if none if uts subtree contains any of n1 or n2.

*/

node *lca(node *root,int n1,int n2)
{
    if(root==NULL) return NULL;
    
    if(root->key==n1 || root->key==n2)
    return root;

    node *lca1=lca(root->left,n1,n2);
    node *lca2=lca(root->right,n1,n2);

    if(lca1!=NULL && lca2!=NULL)
    return root;

    if(lca!=NULL)
    return lca1;

    else
    return lca2;

}