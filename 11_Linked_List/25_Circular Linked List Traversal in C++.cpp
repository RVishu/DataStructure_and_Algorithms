#include <iostream>
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
MINE

node traversal(node *head)
{
    node *curr=head;
    while(curr->next!=head)  //IT MIGHT BE ONLY CURR->!=HEAD
    {
        curr=curr->next;
        cout<<curr;    // IT COME UPPER 1 LINE THAN ABOVE LINE
    }
}

*/

//C++ METHOD 1 (FOR LOOP)
void pintList(node *head)
{
    if(head==NULL) return;
    cout<<(head->data)<<" ";
    for(node *curr=head->next;curr!=head;curr=curr->next)
        cout<<(curr->data);
}

//C++ METHOD 1 (DO WHILE)

void pintList(node *head)   // IMP
{
    if(head==NULL) return;
    node *curr=head;
    do{
        cout<<(curr->data)<<" ";
        curr=curr->next;
    } while(curr!=head);
}    