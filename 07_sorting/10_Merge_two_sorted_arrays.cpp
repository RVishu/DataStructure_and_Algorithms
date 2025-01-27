#include <bits/stdc++.h>
using namespace std;

// O((m+n)*log(m+n))  , Aux : theta(m+n)
void merge(int a[],int b[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
    c[i]=a[i];
    for(int i=0;i<n;i++)
    c[m+i]=b[i];
    sort(c,c+m+n);  // syntax of sort in C++
    for(int i=0;i<(m+n);i++)
    cout<<c[i]<<" ";
}
// EFFICIENT SOLUTION  theta(m+n)  and O(1)
void merge(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])  // we this for stable algo
        {cout<<a[i]<<" "; i++;}
        else
        {cout<<b[j]<<" ";j++;}
    }
    while(i<m)
    {cout<<a[i]<<" ";i++;}
    while(j<n)
    {cout<<b[j]<<" "; j++;}
}