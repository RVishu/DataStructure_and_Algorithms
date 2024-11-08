#include <bits/stdc++.h>
using namespace std;
// understand Again
int getWater(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int Lmax=arr[i];
        for(int j=0;j<i;j++)
        Lmax=max(Lmax,arr[j]);
        int Rmax=arr[i];
        for(int j=i+1;j<n;j++)   //theta(n^2 )
        {
            Rmax=max(Rmax,arr[j]);
            res=res+(min(Lmax,Rmax)-arr[i]);
        }
    }
    return res;
}


//efficient solution;

int GetWater(int arr[],int n)
{
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
    lmax[i]=max(arr[i],lmax[i-1]);
    rmax[n-1]=arr[n-1];
    }
    for(int i=n-2;i>=0;i--)
    {
    rmax[i]=max(arr[i],rmax[i+1]);
    }

    for(int i=1;i<n-1;i++)
    {
    res=res+(min(lmax[i],rmax[i])-arr[i]);
    }

    return res;
}