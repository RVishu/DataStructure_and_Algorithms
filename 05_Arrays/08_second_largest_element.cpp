#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n)
{
    int largest=0;
    for(int i=1;i<n;i++)
    {
    if(arr[i]>arr[largest])
    largest =i;
    } 
    return largest;
}

int SecLargest(int arr[],int n)
{
    int largest = getLargest(arr,n);
    int res=-1;  // because there might not exist any second largest element;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
            {
                res=i;
            }
            else if(arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}

// find second largest using 1 traversal ;
//EFFIECIENT APPROACH

int secondLargest(int arr[],int n)  //theta(n) A S = theta(1)
{
    int res=-1, largest =0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1|| arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}