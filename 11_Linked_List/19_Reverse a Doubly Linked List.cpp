#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        prev=NULL;
        next =NULL;
    }
};
// traversed theough all the nodes of doubly likedlist for every node you traverse , jsut simply swap prev and next.
node *reverse_DLL(node *head)
{
    if(head==NULL || head->next==NULL) return head;
    
    node *prev =NULL;
    node *curr=head;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;

    }
    return prev->prev;
}
//O(n) and O(1)