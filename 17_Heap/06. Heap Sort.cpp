/*
 heap sort  is based on selection sort (we find out max element and swap it with last element   , linear)

if we want to sort an arry in increasing order -> we use Max Heap (to find max element )
 if we want to sort an arry in DEcreasing order -> we use Min Heap

after building maxHeap we swap the last element wiht root -> so root(which is MAX element) goes to end
then we do heapify


build heap - we begin with bottom most right most internal node

 HEAP SORT ALGORITHM
    Step-01 : Build a Max Heap -> we call BuildHeap(begins from last Internal Node goes to root)

*/
#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[],int n,int i)
{
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n && arr[left]>arr[largest]) largest=left;
    if(right<n && arr[right]>arr[largest]) largest=right;

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        maxHeapify(arr,n,largest);
    }
}

void build_heap(int arr[],int n) //O(n)
{
    for(int i=(n-2)/2;i>=0;i--)
        maxHeapify(arr,n,i);
}
// STEP-02 -> repeatedly swap root with last node, reduce heap size by one and heapify

void heap_Sort(int arr[],int n)
{
    build_heap(arr,n);
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);  // here is doubt see lecture
    }
} 

// heap sort - nlogn
// heap sort is used in hybrid algorith