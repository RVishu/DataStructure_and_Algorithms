#include <bits/stdc++.h>
using namespace std;

void printNbyK(int arr[],int n,int k )
{
    sort(arr,arr+n);
    int i=1,count=1;
    while(i<n)
    {
     //   while(i<n && arr[i]=arr[i-1])
        {
            count++;
            i++;
        }
        if(count>n/k)
            cout<<(arr[i-1]+" ");
        count=1;
        i++;    
    }
}