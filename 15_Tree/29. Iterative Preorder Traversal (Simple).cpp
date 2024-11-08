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

// O(n) and O(n)

void iterative_PreOrder(node *root)
{
    if(root==NULL) return;
    stack<node *> st;
    st.push(root);
    while(st.empty()==false)
    {
        node *curr=st.top();
        cout<<(curr->key)<<" ";
        st.pop();

        if(curr->right!=NULL)
            st.push(curr->right);
        if(curr->left!=NULL)
            st.push(curr->left);    
    }
}