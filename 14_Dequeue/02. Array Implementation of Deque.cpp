#include <bits/stdc++.h>
using namespace std;

// SIMPLE IMPLEMENTATION

struct deque
{
    int size,cap;
    int *arr;
    deque(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    
    bool isFull() {return (size==cap);}
    bool isEmpty(){return(size==0);}

    void insertRear(int x)
    {
        if(isFull()) return;
        arr[size]=x;
        size++;
    }

    void deleteRear()
    {
        if(isEmpty()) return;
        size--;
    }

    int getRear()
    {
        if(isEmpty()) return;
        else return (size-1); 
    }

    void insertFront(int x)  // O(n)
    {
        if(isFull()) return;
        for(int i=size-1;i>=0;i--)
            arr[i+1]=arr[i];
            arr[0]=x;
            size++;
    }
    void deletefront()  // O(n)
    {
        if(isEmpty()) return;
        for(int i=0;i<size-1;i++)
        arr[i]=arr[i+1];
        size--;
    }

    int getfront()
    {
        if(isEmpty()) return -1;
        else return 0;
    }


};

// Efficient Implementaion where all operations are O(1)
// here we treat our array as CIRCULAR BUFFER.

/*

deletefront()
front=(front+1)%cap

insertRear(x)
rear=(rear+1)%cap

insertFront(x)
front=(front-1+cap)%cap

deleteRear()
rear=(rear-1+cap)%cap

*/
struct deque
{
    int *arr;
    int front,cap,size;
    deque(int c)
    {
    arr=new int[c];
    cap=c;
    front=0;
    size=0;
    }

    bool isFull() {return (size==cap);}
    bool isEmpty(){return(size==0);}

void deletefront()
{
    if(isEmpty()) return;
    front=(front+1)%cap;
    size--;
}

void insertrear(int x)
{
    if(isFull()) return;
    int new_rear=(front+size)%cap;
    arr[new_rear]=x;
    size++;
}
int getFront()
{
    if(isEmpty()) return -1;
    else return front;

}
void insertFront(int x)
{
    if(isFull()) return;
    front=(front+cap-1)%cap;
    arr[front]=x;
    size++;
}

void deleteRear()
{
    if(isEmpty()) return;
    size--;

}
int getRear()
{
    if(isEmpty()) return -1;
    else return(front+size-1)%cap;
}
};

// tc = O(1)