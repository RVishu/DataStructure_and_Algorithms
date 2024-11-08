/*
1- create a map that stores sum for a given horizontal distaace

2- traverse the map and print values
*/

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


void V_sum(node *root,int hd,map<int,int>mp)
{
    if(root==NULL) return;
    V_sum(root->left,hd-1,mp);
    mp[hd]+=root->data;
    V_sum(root->right,hd+1,mp);

}
void v_sum2(node*root)
{
    map<int,int> mp;
    V_sum(root,0,mp);
    for(auto sum:mp)
    cout<<(sum.second)<<" ";
}