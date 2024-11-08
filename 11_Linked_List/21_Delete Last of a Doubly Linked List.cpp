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
        prev=NULL;
        next=NULL;
    }

};
node *delete_last(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    while (curr->next!=NULL)
    curr=curr->next;
    curr->prev->next=NULL; // deleteing the last node

    delete curr;
    return head;
}
//theta(n)

// if tail pointer is passsed as an aerguement then , theta( 1) => tail->prev->next=NULL



// MINE CODE ->GOOD THAN ABOVE CODE

node *delete_last(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    while (curr->next->next!=NULL)
    curr=curr->next;

    node *temp=curr->next;

    curr->next=NULL; // deleteing the last node

    delete temp;
    return head;
}