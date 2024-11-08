#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left,*right;
    int lcount;  // change in sttruture

    node (int x)
    {
        key=x;
        left=NULL;
        right=NULL;
        lcount=0;
    }
};

// NAIVE SOLUTION- O(n)

/*

int count =0;
void printKth(node *root,int k)
{
    if(root!=NULL)
    {
        printKth(root->left,k);
        count++;
        if(count==k)
            cout<<(root->key,k);
        printKth(root->right,k);    
    }
}

*/

// more optimised soltuion then , rearrange the structure
/*
 EFFICENT - O(h) for k-th smallest

 compare (lcount+1) with k

 1-if same , return root;

 2- if greater,recurr for left subtree with same k

 3-if smaller, recur for right subtree with k as (k-lcount)

*/ 