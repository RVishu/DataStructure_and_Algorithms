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

node *successor(node *curr)
{
    curr = curr->right;
    if(curr->left!=NULL && curr!=NULL)
        curr=curr->right;

}

void delete_from_BST(node *root,int k)
{
    if(root==NULL) return;

    if(root->key==k && root->left==NULL &  root->right==NULL)
        root==NULL;
        return;

    if(root->key==k && (root->left==NULL ^  root->right==NULL))  
    {
        if(root->left!=NULL)
        {
            root=root->left;
            root=NULL;
        }
        else
        {
            root=root->right;
            root=NULL;
        }    
    }  


    // condition 3

    if(root->key==k && root->left!=NULL &&  root->right!=NULL)
    {
        root=successor(root);
        root=NULL;
    }
    
       
}