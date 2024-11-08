#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next =NULL;
    }
};

node *insertPos(node *head, int Pos,int  data)
{
   
    node *temp = new node(data);
    if(Pos==1)
    {
        temp->next=head;
        return temp;
    }
    node *curr=head;
    for(int i=1;i<=Pos-2 && curr!=NULL;i++)
    curr=curr->next;

    if(curr==NULL)
        return head;
   
   
   
    temp->next= curr->next;
    curr=curr->next;

    return head;
}