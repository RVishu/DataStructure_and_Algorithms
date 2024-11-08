#include <bits/stdc++.h>
using namespace std;


//Search(Unsorted)   --> Liner Search
int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)   //O(n)
        return i;
    }
    return -1;
}

//Insert --> we can't insert in a fixed sized array which is already full;
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n==cap)
    return n;
    int idx = pos-1;
    for(int i=n-1;i>=idx;i--)  //O(n)
    
        arr[i+1]=arr[i];
        arr[idx]=x;
        return (n+1); 
}


//INSERT ((at the end )) for Dynamic sized array 
      //O(1)
