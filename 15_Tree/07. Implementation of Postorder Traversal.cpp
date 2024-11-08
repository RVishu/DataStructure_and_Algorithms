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

void Postorder(node *root)
{
    if(root!=NULL)
    {
       
        Postorder(root->left);
        
        Postorder(root->right);

         cout<<(root->key)<<" ";
    }
}

// time complexicity = O(n)
// space complexicity = O(h)