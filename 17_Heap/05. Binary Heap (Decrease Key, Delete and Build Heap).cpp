#include <bits/stdc++.h>
using namespace std;

class MinHeap{
   int *arr;// int []arr;
    int size;
    int capacity;
  public:   // this is not taught by sir
    MinHeap(int c)
    {
        arr=new int [c];
        size=0;
        capacity=c;
    }
    int left(int i){return (2*i+1);}
    int right(int i){return (2*i+2);}
    int parent(int i){return (i-1)/2;}

void insert(int x)
{
    if(size==capacity) return;
    size++;
    arr[size-1]=x;
    for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
    {
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
    // O(log(size))
}

int *arr;
int size,capacity;

void MinHeapify(int i) // O(logn) and O(h )
{
    int lt=left(i),rt=right(i);
    int smallest=i;
    if(lt<size && arr[lt]<arr[i])
        smallest=lt;
    if(rt<size && arr[rt]<arr[smallest])
        smallest=rt;
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        MinHeapify(smallest);
    }        
}

int Extract_Min()
{
    if(size==0)
        return INT_MAX;
    if(size==1) //this is necessary to ensure n>1 work properly
    {
        size--;
        return arr[0];
    }

    swap(arr[0],arr[size-1]);
    size--;
    MinHeapify(0);
    return arr[size];

}

void decreaseKey(int i,int x) // O(logn)
{
    arr[i]=x;
    while(i!=0 && arr[parent(i)]>arr[i])
    {
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
}


 // delete -> decrease_key then extact_min

//BUILD HEAP -> given a random array rearrange its elements to form a min heap;

void Build_Heap() // looks like (nlogn) but by proof it is O(n)
{
    for(int i=(size-2)/2;i>=0;i--) // i=size-2/2 ->minHeapify
    MinHeapify(i);
}

};

