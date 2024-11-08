// write a c++ program which create a linked list with 3 nodes
// we use structure bcz we need to store differnet data types at one place
#include <bits/stdc++.h>
using namespace std;

struct node  // everythiing  is pulic by default
{
   int data;
   node *next; // self refrencial structure
   node (int x) // constructor to initialize a Node
   {
    data =x;
  next = NULL;
   }
};
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    return 0;
}
// we could use class to represent a Node instead of structure--> length of programme will increase

// short Implementation and Linear Implementation
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    return 0;
}