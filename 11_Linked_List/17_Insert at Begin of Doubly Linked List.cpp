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


node *insert_Begi(node *head,int data)
{
     node *temp = new node(data);
     temp->next =head;
     if(head!=NULL)  // IMP
     head->prev=temp; // here that's how we linked data to head , or insert data at beginning
     return temp;

}