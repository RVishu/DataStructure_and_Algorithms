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

/*
we use -1 for NULL 
ASSUMPTION: -1 is not present in the tree as data.
*/

// serialization theta(n) and theta(n)
const int EMPTY=-1;
void serialize(node *root, vector<int> &arr)
{
    if(root==NULL)
    {
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr);
}



// DESERIALIZATION - theta(n)

const int EMPTY=-1;
int index=0;

node *deserialize(vector<int> & arr1)
{
    if(index==arr1.size()) return NULL;

    int val =arr1[index];
    index++;

    if(val==EMPTY) return NULL;

    node *root= new node(val);
    root->left=deserialize(arr1);
    root->right=deserialize(arr1);

    return root;

}
















