#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
    
    node (int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    } 
};


/*
 1-A SIMPLE BUT WRONG SOLUTION

  do any traversal , for every node, check if its left child is smaller and 
  right child is greater


2- CORRECT BUT INEFFICIENT

for every node, 
    a-find maximum in left subtree
    b-find minimum in right subtree
    c-check if the current node is greater 
        than the maximum and smaller than the minimum



3- EFFICIENT SOLUTION

    - pass a range for every node.
    - for root, range is -infinity to +infinity
    - for left child of a node, in range ,
        we change upper bound as the node's value
    - for right child of a node, in range, we change 
        lower_bound as the node's value


4- EFFICIENT SOLUTION(Inorder Traversal)

    A Binary Tree is BST iff inorder traversal of it is in 
        increasing order


*/


// 3-EFFICIENT SOLUTION
bool isBST(node *root,int min,int max)
{
    if(root==NULL) return true;

    return(root->data>INT_MIN && 
            root->data<INT_MAX &&
            isBST(root->left,min,root->data)
            && isBST(root->right,root->data,max));
}


// 4- EFFICIENT SOLUTION - Inorder Traversal - O(n) and O(H)

/*
int prev= INT_MIN;
bool isBST(node *root)
{
    if(root==NULL) return true;
    if(isBST(root->left)==false) return false;
    if(root->key<=prev) return false;
    prev=root->key;
    return isBST(root->right);
}

*/