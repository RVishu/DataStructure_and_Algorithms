 #include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    int key;
    node *left;
    node *right;

    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

//Naive solution

int countNode(node *root)
{
    if(root==NULL)
        return 0;

    else
    return 1+countNode(root->left)+countNode(root->right);    
}

//EFFICIENT SOLUTION  O(logn*logn)


int count_Nodes(node *root)
{
    int lh=0,rh=0;
    node *curr=root;
    while(curr!=NULL)
    {
        lh++;

        curr=curr->left;
    }

    curr=root;
    while(curr!=NULL)
    {
        rh++;
        curr=curr->right;
    }
    if(lh==rh)
        return pow(2,lh)-1;
    else
        return 1+count_Nodes(root->left)+count_Nodes(root->right);    
}

// t(n)<t(2n/3)+theta(h)

// t(n)=t(2n/3)+theta(logn)