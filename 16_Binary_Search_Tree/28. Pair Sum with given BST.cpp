 /*
 METHOID 1- do a inorder traversal of gievn BST and store it in a arry

 2- use two pointer approach to find if array has a pair with given sum
 
 */ 

// method 2 (hashing)

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left,*right;
    
    node (int x)
    {
        key=x;
        left=NULL;
        right=NULL;
    } 
};


bool isPairSum(node *root,int sum,unordered_set<int> &s)

{
    if(root==NULL) return false;

    if(isPairSum(root->left,sum,s)==true)
            return true;

    if(s.find(sum-root->key)!=s.end())
        return true;
    else 
        s.insert(root->key);
   //  return isPairBST(root->right,sum,s) ;               
}

//O(n) and O(H+n)=O(n)