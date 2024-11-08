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

int preIndex=0;
node *cTree(int in[],int pre[],int is,int ie)
{
    if(is>ie) return NULL;
    node *root=new node(pre[preIndex++]);

    int inIndex;
    for(int i=is;i<=ie;i++)
    {
        if(in[i]==root->key)
        {
            inIndex=i;
            break;
        }
    }

    root->left=cTree(in,pre,is,inIndex-1);
    root->right=cTree(in,pre,inIndex+1,ie);

    return root;
}

// O(n2) 

// with hashing == O(n)