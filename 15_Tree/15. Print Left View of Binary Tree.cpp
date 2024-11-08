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

// pr-order Traversal
  int maxLevel=0;
  void printLeft(node *root, int level)
  {
    if(root == NULL) return;
    if(maxLevel<level)
    {
        cout<<(root->key) <<" ";
        maxLevel=level;

    }

    printLeft(root->left,level+1);
    
    printLeft(root->right,level+1);


    void printLeftview(node *root); // this function is of last video
    {
        printLeft(root,1);
    }
  }

  // Iterative solution - concept printing level order line by line , just first element of each line.

  void printleft(node *root)
  {
    if(root==NULL) return;
    queue<node *> q ;q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            node *curr=q.front();
            q.pop();
            if(i==0)
                cout<<(curr->key)<<" ";
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);    
        }
    }
  }

  // theta(n) , theta(w)