#include <bits/stdc++.h>
using namespace std;
 /*
 int remove(int a[],int n)
 {
    int t[n];
    t[0]=a[0];
    int res=1;

    for(int i=1;i<n;i++)
    {
        if(t[res-1]!=a[i])
        {
            t[res]=a[i];
            res++;
       
        }

    }
    for(int i=0;i<res;i++)
    {
        a[i]=t[i];

    }
    return res;
    
 }

 int main()
 {
    int n;
    cin>>n;
    int a[n],t[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<remove(a,n);

 }
 */

 //write solution with AS = O(1);
 //EFFIECIENT METHOD
 int duplicate(int a[],int n)
 {
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[res-1])
        {
            a[res]=a[i];
            res++;
        }
    }
    return res;
 }