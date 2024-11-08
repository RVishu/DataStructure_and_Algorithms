#include <bits/stdc++.h>
using namespace std;
//LEFT ROTATE AN ARRAY BY D;

//naive solution is to write 2 time the left rotation by one.

//solution theta(n);

void leftRotate(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    
        temp[i]=arr[i];   //theta(d+n-d+d) = theta(n+d)~ theta(n)
                            //AS theta(d)
    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    for(int i=0;i<d;i++)
    arr[n-d+i]=temp[i];
}

//solution having AS theta(1) and time complexity theta(n);

void leftRotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}