#include <iostream>
using namespace std;


struct node
{
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        data = d;
        prev=NULL;
        next=NULL;
    }
};

node *del_Head(node *head)
{
    if(head==NULL) return NULL;

    if(head->next == NULL)
    {
        delete head;  // IMP
        return NULL;
    }

    else
    {
        node *temp = head;

        head=head->next;  // IMP

        head->prev=NULL;   // HERE NO NEED TO ADD temp->next=NULL
        delete temp;
        return head;
    }
}

// time complexxity = O(1)