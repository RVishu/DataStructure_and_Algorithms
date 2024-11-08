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

// the farthest node must be reachable through one of the ancestores

int res=0;
int burnTree(node *root,int leaf,int &dist)

{
    if(root==NULL) return 0;
    if(root->data==leaf){dist=0;return 1;}

    int ldist=-1,rdist=-1;
    int lh=burnTree(root->left,leaf,ldist);
    int rh=burnTree(root->right,leaf,rdist);

    if(ldist!=-1)
    {
        dist=ldist+1;
        res=max(res,dist+rh);
    }
    else if(rdist!=-1)
    {
        dist=rdist+1;
        res=max(res,dist+lh);
    }
    return max(lh,rh)+1;
 }

/*
TWO THINGS DOEN

    1-return height
    2-set dist if given leaf is a descendant.
*/