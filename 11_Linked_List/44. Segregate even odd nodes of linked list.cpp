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

node *segregate(node *head)
{
    node *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        int x=curr->data;
        if(x%2==0)
        {
            if(eS==NULL)
            {
                eS=curr;
                eE=eS;
            }
            else
            {
                eE->next=curr;
                eE=eE->next;
            }
        }
        else
        {
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }else
            {
                oE->next=curr;
                oE=oE->next;
            }
        }
    }

    //after for loop 
    if(oS==NULL || eS==NULL)
    return head;
    eE->next=oS;
    oE->next=NULL;
    return eS;
    //end of function
    
}