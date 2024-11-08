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

void printSpiral(node *root)
{
    if(root==NULL) return;
    queue<node *> q;
    stack<int> s;
    bool reverse =false;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            node *curr=q.front();
            q.pop();

            if(reverse)
                s.push(curr->key);
            else
                cout<<curr->key<< " ";

            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);

        }
        if(reverse)
        {
            while(s.empty()==false)
            {
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        reverse=!reverse;
        cout<<endl;
    }
}

/*
2nd Method

    1- push root to the stack s1;

    2- while any of the two stacks is not empty
        while s1 is not empty

            a- take out a node, print it
            b- push the children of the taken out node into s2;

        while s2 is not empty 
            a-take out a node ,print it
            b- push the chidren of the taken out node into s1 in revere oreder    

*/