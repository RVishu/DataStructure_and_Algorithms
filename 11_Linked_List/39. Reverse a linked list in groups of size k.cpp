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
/*
TAKE IDEA FROM THSES

node *curr=head;
node *prev=NULL,*next=NULL;
int count=0;
while(curr!=NULL && count<k)
{
    next=curr->next;
    curr->next=prev;
    prev=curr,curr=next;
    count++;
}
*/



//Recursive solution O(n) and O(n/k)

node *reverseK(node *head,int k)
{
    node *curr=head, *next=NULL ,*prev=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        curr=next;
        count++;

    }
    if(next!=NULL)
    {
        node *rest_head=reverseK(next,k);
        head->next=rest_head;

    }
    return prev;     // prev is new head

}
 
//ITERATIVE SOLUTION -theta(n) and theta(1);

node *reverse_k(node *head,int k)
{
    node *curr=head,*prevFirst=NULL;
    bool isFirstPass=true;
    while(curr!=NULL)
    {
        node *first=curr,*prev=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {
            node*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
       }
       if(isFirstPass){head=prev;isFirstPass=false;}
        else {prevFirst->next=prev;}
        prevFirst=first;
    }
    return head;
}