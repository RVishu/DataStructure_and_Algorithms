#include <bits/stdc++.h>
using namespace std;


//mine 
/*
void LeftRotate(int arr[],int n)
{
    swap(arr[0],arr[n-1]);
    for(int i=0;i<n-1;i++)
    {
        swap(arr[i],arr[i+1]);
    }
}

*/

//sir
void lRotateOne(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
        arr[n-1]=temp;
    }
}