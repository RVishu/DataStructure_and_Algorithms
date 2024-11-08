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

void printFromEnd(node *head,int n)
{
    int len=0;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    len++;

    if(len<n)
    return;

    node *curr=head;
    for(int i=1;i<len-n+1;i++)   // i<len-n+1   & i=1  IMP
    curr=curr->next;
    cout<<(curr->data)<<" ";
}

//find a solution that works without finding length of a linked list;
// METHOD OF 2 pointers
/*

1- move "first"  n positions ahead.
2- start "second " pointer from Head.
3- move the "first" and "second" at same speed. when "first "
    reaches NULL, Second reaches the Required Node.
*/

void print_from_end(node *head,int n)
{
    if(head==NULL) return;
    node *first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL) return;
        first=first->next;
    }
    node *second=head;
    while(first!=NULL)
    {
        second=second->next;
        first = first->next;
    }
    cout<<(second->data);
}