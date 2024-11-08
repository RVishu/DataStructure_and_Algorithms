#include <bits/stdc++.h>
using namespace std;

//O(position)   , O(1)
int search(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x) return i;
        if(arr[i]>x) return -1;
        i++;
    }
}
// Efficeint solution    O(log(position))  , Unbounded Binary search
int Search(int arr[],int x)
{
    if(arr[0]==x) return 0;
    int i=1;
    while(arr[i]<x)
    {

        i=i*2;
    }
    if(arr[i]==x) return i;

  //  return binarySearch(arr,x,i/2+1,i-1)
}