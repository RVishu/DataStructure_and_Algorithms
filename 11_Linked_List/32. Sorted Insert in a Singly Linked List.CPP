#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int d) 
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

node *sortedInsert(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
        return temp;
        
     if(x<head->data)
     {
        temp->next=head;
        return temp;
     }   

     node *curr=head;
     while(curr->next!=NULL && curr->next->data<x)
     {curr=curr-> next;}
    temp->next=curr->next;
    curr->next=temp;

    return head;

// wheneverr we access of something.data or something->nexr we must ensure 
// that curr or head is NOT NULL ---> otherwise it will be prblem

}

// time complexicity is Theta (n)