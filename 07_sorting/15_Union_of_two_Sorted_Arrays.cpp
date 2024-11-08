#include <bits/stdc++.h>
using namespace std;

// NAIVE SOLUTION  O{(m+n)*log(m+n)} and theta(m+n)
void print_Union(int a[],int b[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i+m]=b[i];
    }

    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    if(i==0 || c[i]!=c[i-1])  // here i>0
    cout<<c[i]<<" ";

}

// theta(m+n) and O(1) bcz we are printing elements only--> follow process of merge function and merge sort

void Print_Union(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(j>0 && b[j]==b[j-1]){j++;continue;}
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(b[i]<a[j]){cout<<b[j]<<" ";j++;}
        else { cout<<a[i]<<" ";i++;j++;}
    }
    while(i<m)
    if(i>0 && a[i]!=a[i-1]){cout<<a[i]<<" ";i++;}
    while(j<n)
    if(j>0 && b[j]!=b[j-1]){cout<<b[j]<<" ";j++;}
}
