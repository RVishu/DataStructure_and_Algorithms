#include <bits/shared_ptr.h>
using namespace std;
struct twoStack
{
    int *arr ,cap,top1,top2;
    twoStack(int n)
    {cap=n;top1=-1;top2=cap;arr=new int [n];}
    void push1(int x)
    {
        if(top1<top2-1){top1++;arr[top1]=x;}
    }
    void push2(int x)
    {
        if(top1<top2-1){top2--;arr[top2]=x;}
    }
    int pop()
    {
        if(top1>=0){int x=arr[top1];top1--;return x;}
        else{return;}
    }
    int pop2()
    {if(top2<cap)
    {
        int x=arr[top2];
        top2++;
        return x;
    }
    else {return;}
    }
};