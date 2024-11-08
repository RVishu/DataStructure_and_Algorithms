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

//MINE SOLUTION

int max_value(node *root)
{
    if(root==NULL) return 0;  // need to return INT_MIN here

    int num = max(max_value(root->left),max_value(root->right));
    return max(root->key,num);
}

int main()
{
    node *root = new node(10);
    root->left= new node(20);
    root->right=new node(30);
    root->left->left=new node(52);
    root->right->right=new node(50);

    cout<<max_value(root);

    return 0;
}