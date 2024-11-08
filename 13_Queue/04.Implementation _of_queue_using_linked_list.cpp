 #include <bits/stdc++.h>
 using namespace std;

 struct node  //singly linked list
 {
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
 };

struct Queue
{
    node *front,*rear;
    int size;  //getSize
    Queue()
    {
        front=NULL;
        rear=NULL;
        size=0;  //getSize
    }

    void enque(int x)
    {
        node*temp=new node(x);
        size++;  //getSize
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;

    }

    void deque()
    {
        if(front==NULL) return;
        size--;      //getSize
        node *temp=front;
        front=front->next;
        if(front==NULL)
        {rear=NULL;}
        delete(temp);
    }
};


