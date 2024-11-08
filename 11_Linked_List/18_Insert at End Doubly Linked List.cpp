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


node *insert_End(node *head,int data)
{
   
     node *temp = new node(data);

    if(head==NULL)  // --IMP
    return temp;

    node *curr =head;
     while(curr->next!=NULL)
     curr=curr->next; 

     curr->next=temp;
     temp->prev=curr;

     return head;

}
int main()
{
    node *head = NULL;
    head = insert_End(head,10);
    head = insert_End(head,20);
    return 0;
}