
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

int Max_binary_tree(node *root)
{
    if(root==NULL) return INT_MIN;
    else
   return max(root->key,Max_binary_tree(root->left),Max_binary_tree(root->right));
}

// O(n) and O(h) 


//iterative solution == O(n) and O(w)