#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
// it first reverses the , first n-1 nodes then linkes the nth node at the end

// traversed the linked list from left to right 
/*
curr->next=prev;
prev=current;
current=curr->next
*/

node *revREVL(node *curr,node *prev)
{
    if(curr==NULL) return prev;
   // if(curr->next==NULL) return curr;  no need for this base case , bcz we have to return the prev values
    node *next=curr->next; // we are storing next of current first 
    curr->next=prev;
    return revREVL(next,curr); 

}