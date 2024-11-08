// linked list implementation of stack
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;  // because we have to pick just 1 end , for insert and delete
    node (int d)
    {
        data=d;
        next=NULL;
    }
};

struct MyStack
{
    node *head;
    int sz;  // size variable we are using here to ensure size function in O(1) time
    MyStack()
    {head=NULL;sz=0;}

    void push(int x)
    {
        node *temp= new node (x);  // in case of null it first locate memory temp then ,, replace it with valu
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop()
    {
        if(head==NULL)
        return INT_MAX;

        int res=head->data;
        node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    int size(){return sz;}

    bool isEmpty (){return (head==NULL);}
    int peek()
    {
        if(head==NULL)
           return INT_MAX;
           return head->data;
    }
};
