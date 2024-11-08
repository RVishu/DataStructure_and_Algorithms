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

int count_num_of_nodes_in_complete_BT(node *root)
{
    if(root==NULL) return 0;

    return 1 + count_num_of_nodes_in_complete_BT(root->left) + count_num_of_nodes_in_complete_BT(root->right);
}


int main()
{
    node *root = new node(10);
    root->left = new node(50); 
     root->right = new node(30);
      root->left->left = new node(80);
       root->left->right = new node(60);

       cout<<count_num_of_nodes_in_complete_BT(root);

       return 0;
}