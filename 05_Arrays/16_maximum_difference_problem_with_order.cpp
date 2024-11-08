#include <bits/stdc++.h>
using namespace std;

//to print max value of arr[j]-arr[i] such that j>i;

/*
int max_diff(int arr[],int n)
{
    int max = arr[0];
    for(int j=1;j<n;j++)
    {
        if(arr[max]<arr[j])
        {
             max = arr[j];
           
        }
    }
    return j;
}
*/

//Naive solution SIR   // theta(n^2)

int maxDiff(int arr[],int n)
{
    int res = arr[1]-arr[0];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res= max(res,arr[j]-arr[i]);
        }
    }
    return res;
}

//efficient solution

int maxDifference(int arr[],int n)
{
    int res=arr[1]-arr[0],minVal=arr[0];
    for(int j=1;j<n;j++)
    {
        res = max(res,arr[j]-minVal);
        minVal=min(minVal,arr[j]);
    }
    return res;
}
