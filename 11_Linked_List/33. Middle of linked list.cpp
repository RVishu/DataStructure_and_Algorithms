// given singly linked list we have to find middle of it.
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
// this use two traversal find a soltuion that use only 1 traversal
void printMiddle(node *head)
{
    if(head==NULL) return;

    int count=0;
    node *curr;
    for(curr=head;curr!=NULL;curr=curr->next)
    count++;
    curr=head;
    for(int i=0;i<count/2;i++)
    curr=curr->next;
    cout<<curr->data; 
}

//IMP

//EFFICIENT SOLUTION -> even and odd nodes
 void Print_Middle(node *head)
 {
    if(head==NULL) return;
    
    node *slow =head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    cout<<(slow->data);

 }