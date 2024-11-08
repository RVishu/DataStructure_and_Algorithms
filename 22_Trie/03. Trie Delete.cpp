#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
    TrieNode *child[26];
    bool isEnd;
    TrieNode()
    {
        isEnd=false;
        for(int i=0;i<26;i++)
            child[i]=NULL;
    }
};

// Delete - O(n)
 

 // i is initally 0

 TrieNode *delkey(TrieNode *root,string &key,int i)
 {
    if(root==NULL) return NULL;
    if(i==key.length())
    {
        root->isEnd=false;
        if(isEmpty(root)==true)
        {  
            delete(root);root=NULL;
        }
        return root;
    }

    int index=key[i]-'a';
    root->child[index]=delkey(root->child[index],key,i+1);

    if(isEmpty(root) && root->isEnd==false)
    {delete(root);root=NULL;}
    return root;
 }

 bool isEmpty(TrieNode *root)
 {
    for(int i=0;i<26;i++)
        if(root->child[i]!=NULL)
            return false;

    return true;            
 }