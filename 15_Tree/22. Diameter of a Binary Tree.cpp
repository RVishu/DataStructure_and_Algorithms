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

find the following valur for every node
and returb the maximum :
    max(1+lh+rh)
    lh->left height
    rh->right height

*/

int height(node *root)  //O(n2)
{
    if(root==NULL) return 0;
    else
    return 1+max(height(root->left),height(root->right));
}

int diameter(node *root)
{
    if(root==NULL) return 0;
    int d1=1+height(root->left)+height(root->right);
    int d2=diameter(root->left);
    int d3=diameter(root->right);

    return max(d1,max(d2,d3));
}

// BETTER O(n)  solution

/*
    Precompute height of every node and store it in a map

    // in c++
        -  unordered_map<node*,int>

*/


// Efficient solution O(n) time  --> No overhead of map

// this function returns the height,but sets the "res" variable to have diameter.

int res=0;

int HEIGHT(node *root)
{
    if(root==NULL) return 0;
    int lh= HEIGHT(root->left);
    int rh=HEIGHT(root->right);

    res=max(res,lh+rh+1);
    return 1+max(lh,rh);
}

