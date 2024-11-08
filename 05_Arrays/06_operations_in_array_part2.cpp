#include <bits/stdc++.h>
using namespace std;

//Delete
int deleteEle(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)   //theta(n)
        break;
    }
    if(i==n)
    return n;
    for(int j=i;j<n-1;j++)
    arr[j]==arr[j+1];
    return (n-1);
}


//insrt at the end and delete from the end can be done inn O(1) time.
