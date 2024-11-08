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
//naive

//this is differnet from singly linked list Insertion.  
node *insertBegin(node *head,int x)
{   // IMP FIRST CASE
    node *temp=new node(x); // we have a constructor inside the node Class that creates memory for new node x
    if(head==NULL)
        temp->next=temp;
    else
    {
        node *curr=head;
        while(curr->next!=head)
            curr=curr->next;


            curr->next=temp;
            temp->next=head;  // NO NEED TO UPDATE HEAD HERE
    }    
    return temp;
}

//efficient- insetion at O(1) time.    // IMP

node *insertBegin(node *head,int x)
{
    node *temp=new node(x); // we have a constructor inside the node Class that creates memory for new node x
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }    
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
   
}
}
