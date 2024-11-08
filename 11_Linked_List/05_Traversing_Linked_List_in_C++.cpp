#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void printList(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printList(head);
    return 0;
}



// Programme 2


int main()
{
    node *head=new node(10);
   printList(head);   // 10
    printList(head);   // 10
    return 0;
}

void printList(node *head)
{
    
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next; // our main's head is not modified , but printList head does
    }
}

// 2 Head 
// 1st is Main head , 2nd is printList Head
// 

