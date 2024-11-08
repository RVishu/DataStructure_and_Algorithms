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

//Previous video 
node *delete_Head(node *head)
{
    if(head==NULL) return NULL;
    if(head->next=NULL)
    {
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    node *temp = head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

// naive
node *delete_kth(node *head,int k)
{
    if(head==NULL) return head;
    if(k==1)
        return delete_Head(head);

        node *curr=head;
        for(int i=0;i<k-2;i++)
        curr=curr->next;
        
        node *temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        return head;
}
