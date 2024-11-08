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

//NAIVE SOLUTION - theta(N)
node *insertEnd(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        node *curr=head;
        while(curr->next!=head)
        curr=curr->next;

        curr->next=temp;
        temp->next=head;
        return head;
    }
}

//EFFICIENT SOLUTION -THETA(1)- TRICKY
node *insertEnd(node *head,int x)
{
    node *temp =new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;

        int t=temp->data;

         
        temp->data=head->data;
        head->data=t;
        return temp;

    }
}
