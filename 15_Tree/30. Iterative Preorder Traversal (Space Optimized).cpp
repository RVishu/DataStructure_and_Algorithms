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
        left=NULL;
        right=NULL;
    }
};

// Iterative Pre-Order Traversal (SPACE OPTIMIZED SOLUTION)- o(N) and O(H)

/*

    1- create an empty stack st
    2- st.push(root)
    3- curr=root
    4- while(st is not empty)
        {
            while(curr is not NULL)
            {
                print(curr->key)
                if(curr->right!=NULL)
                    st.push_back(curr->right)
                curr=curr->left

            }
            curr=st.pop()
        }

*/ 

void Iterative_preorder(node *root)
{
    if(root==NULL) return;
    stack<node *> st;
    node *curr=root;
    while(curr!=NULL || st.empty()==false)
    {
        while(curr!=NULL)
        {
            cout<<(curr->key)<<" ";
            if(curr->right!=NULL)
                st.push(curr->right);
            curr=curr->left;

        }
        if(st.empty()==false) {curr=st.top();st.pop();}
    }
}