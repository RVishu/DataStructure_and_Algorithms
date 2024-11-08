#include <bits/stdc++.h>
using namespace std;

struct  node 
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
// we need to reach 2nd lasst element and make its next element NULL;
// IN C++ we need to delocate memory first. 
node *delTail(node *head)
{
    if(head==NULL )
    return NULL;
    if(head->next==NULL)
    {
        delete head;  // the only case where Head is changed
        return NULL;
    }
    node *curr=head;
    while(curr->next->next!=NULL) // we have to ensure that atleast 2 nodes in LL
    curr=curr->next;

    delete(curr->next); // 10 20 30 40 50 ,, curr->next is 50 , curr = 40 here
    curr->next=NULL;
    return head;

    
}
//TC O(n)