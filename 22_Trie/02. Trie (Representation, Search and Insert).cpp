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

// SEARCH --> O(n)
TrieNode *root;
bool search(string &key)
{
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]-'a';
        if(curr->child[index]==NULL)
            return false;
        curr =curr->child[index];

    }
    return curr->isEnd;
}

// INSERT  -> theta(n)
 TrieNode *root;
void insert(string &key)
{
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]-'a';
        if(curr->child[index]==NULL)
            curr->child[index]=new TrieNode();
        curr =curr->child[index];

    }
    curr->isEnd=true;
}
