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
    else
    

    return max(height(root->left),height(root->right))+1;
}   

// Naive O(n2)

bool isBaanced(node *root)
{
    if(root==NULL) return true;
    int lh= height(root->left);
    int rh= height(root->right);

  return(abs(lh-rh)<=1 && isBaanced(root->left) && isBaanced(root->right));  
}


// O(n) time solution

int isBalanced(node *root)
{
    if(root==NULL) return 0;
    int lh=isBalanced(root->left);
    if(lh==-1) return -1;
    int rh = isBalanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
}