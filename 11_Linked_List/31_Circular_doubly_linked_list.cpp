//  In doubly linked list we have extra pointer with every node called Previous point
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data =x;
        prev=NULL;
        next= NULL;
    }
};

node *insert(node *head,int x)
{node *temp = new node(x);
{
    if(head==NULL)
    {
        temp->next =temp;
        temp->prev=temp;
        return temp;
    } 
    
temp->prev=head->prev;
temp->next=head;
head->prev->next=temp;
head->prev=temp;
return temp;

}
}


//Insert at the End of a Circular Doubly Linked List.

node *Insert_End(node *head , int x)
{
    node *temp = new node(x);
    {
        if(head=NULL)
        {
            temp->next=temp;
            temp->prev=temp;
            return temp;
        }
        temp->prev=head->prev;
        temp->next=head;
        head->prev=temp;
        head->prev->next=temp;
        return head; // JUST RETURN THE SAME HEAD.
    }
}