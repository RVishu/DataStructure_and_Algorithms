/*
1-Create an empty map "mp". map in c++

2- do level order traversal and put nodes into the map
 mp[-1]={20}
 mp[0]={10,40}
 mp[1]={30}
 mp[2]={50}

3-now traverse the map and print contents
20 
10 40
30
50

*/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
    
    node (int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    } 
};

void vTRAVERSAL(node *root)
{
    map<int,vector<int>> mp;
    queue<pair<node *,int>> q;
    q.push({root,0});
    while(q.empty()==false)
    {
        auto p=q.front();
        node *curr=p.first;
        int hd=p.second;
        mp[hd].push_back(curr->data);
        q.pop();

        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});    
    }
    //print mp contents line by line
    for(auto p:mp)
    {
        vector<int> v=p.second;
        for(int x:v)
            cout<<x<<" ";
        cout<<endl;    
    }
}