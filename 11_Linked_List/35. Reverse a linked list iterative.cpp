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

//NAIVE SOLUTION--> using auxiliary array   EQUIRED 2 TRAVERSALS and Aux. Space O(n)
node *REV_List(node *head)
{
    vector <int> arr;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        arr.push_back(curr->data);
    }
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}


// EFFICIENT SOLUTION -> change the link rather than changing the data

node *reverse(node *head)
{
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL)
    {
        node *next =curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev; // prev is new head
}

// O(n)