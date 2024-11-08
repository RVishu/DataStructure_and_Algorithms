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
//NAIVE METHOD - theta(n)

node *delete_Head(node *head)
{
    if(head==NULL) return NULL;

    if(head->next=NULL)
    {
        delete head;
        return NULL;
    }
    node *curr=head;

    while(curr->next!=head)
    curr=curr->next;

    curr->next=head->next;
    delete head;
    return (curr->next);
}

//EFFICIENT SOLUTION - theta(1)
node *delete_Head(node *head)
{
    if(head==NULL) return NULL; 

    if(head->next=NULL)
    {
        delete head;
        return NULL;
    }
    // IMMP
    head->data=head->next->data;
    node *temp = head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}