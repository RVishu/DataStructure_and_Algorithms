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

// my solution
int Height(node *root)
{
    int h=0;
    if(root==NULL) return 0;
    if(root!=NULL) h++;
    Height(root->left);  // here we can declare a variable m = height of left --> then comapre by MAX function(m,n)
    Height(root->right);

    return max(Height(root->left),Height(root->right));
    
};

// Sir solution
int Height(node *root)
{
    
    if(root==NULL) return 0;
    else
    

    return max(Height(root->left),Height(root->right))+1;
    
};//O(n) and O(h)