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

// idea of recursive is to reverse the linked list after head

node *recRev(node *head)
{
    // Base cases?
    if(head==NULL ||head->next==NULL) return head;

    node *rest_head=recRev(head->next);
    node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}