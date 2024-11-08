#include <bits/stdc++.h>
using namespace std;

/*
given an array, how to implement k stacks in it.

class kstacks
{                                          // sn:{0,1,2...k-1} 
    int arr[],cap;
    void pus(int x,int sn){...}
    int pop(int sn){...}
    bool isEmpty(int sn){...}
    int size(int sn){...}
    int top(int sn){...}
}
*/

struct kstacks
{
    int *arr,*top,*next;
    int k,freeTop,cap;
    kstacks(int k1 ,int n)
    {
        k=k1,cap=n;
        arr=new int[cap];
        top=new int[k];
        next=new int[cap];

        for(int i=0;i<k;i++)
        top[i]=-1;
        freeTop=0;
        for(int i=0;i<cap-1;i++)
        next[i]=i+1;
        next[cap-1]=-1;
    }
    // order of operation is very important BELOW

    // data memeber and construction
    void push(int x,int sn)
    {
        int i=freeTop;
        freeTop=next[i];
        next[i]=top[sn];
        top[sn]=i;
        arr[i]=x;

    }
    int pop(int sn)
    {
        int i=top[sn];
        top[sn]=next[i];
        next[i]=freeTop;
        freeTop=i;
        return arr[i];
    }
}; 