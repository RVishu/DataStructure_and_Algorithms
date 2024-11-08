#include <bits/stdc++.h>
using namespace std;


// simple - front - 0 and rear= size -1
struct Queue
{
    int size,cap;
    int *arr;
    Queue(int c)
    {
        cap=c;
        size=0;
        arr=new int [cap];
    }
    bool isFull() {return (size==cap);}
    bool isEmpty(){return(size==0);}
    void enque(int x)         //O(1)
    {
        if(isFull()) return;
        arr[size]=x;
        size++;
    } 
    void deque() // O(n)
    {
        if(isEmpty()) return;
        for(int i=0;i<size-1;i++)
        arr[i]=arr[i+1];
        size--;
    } 
    int getFront()
    {
        if(isEmpty())
        return -1;
        else
        return 0;
    }
    int getRear()
    {
        if(isEmpty())
        return -1;
        else
        return size-1;
    }
    bool isFull(){return (size==cap);}
    bool isEmpty(){return (size==0);}
    int size(){}
};


//EFFICIENT IMPLEMENTATION (Circular Array)



struct Queue
{
    int *arr;
    int front,cap,size;
    Queue(int c)
    {
        arr=new int [c];
        cap=c;
        front=0;
        size=0;
    }
    bool isFull() {return (size==cap);}
    bool isEmpty(){return(size==0);}

       int getFront()
    {
        if(isEmpty())
        return -1;
        else
        return 0;
    }
    int getRear()
    {  
        if(isEmpty())
        return -1;
        else
        return (front+size-1)%cap;
    }

   
    // function to be added here
    void enque(int x)
    {
        if(isFull()) return;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }

    void deque()
    {
        if(isEmpty()) return;
        front=(front+1)%cap;
        size--;
    }
};

