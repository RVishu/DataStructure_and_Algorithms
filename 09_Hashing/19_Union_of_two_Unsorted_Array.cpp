#include <bits/stdc++.h>
using namespace std;

// Naive Solution - O((m+n)*(m+n)) and O(m+n);
int FindUnion(int a[],int b[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];
 

    for(int i=0;i<n;i++)
    {
        c[m+i]=b[i];
    }
    int res=0;  // all below code are here to count distinct elements in C
    for(int i=0;i<m+n;i++)
    {
        bool flag = false;
        for(int j=0;j<i;j++)
            if(c[i]==c[j]){flag=true;break;}
            if(flag==false) res++;
    }
   
    return res;
}

// O(m+n) and O(m+n)
int Find_Union(int a[],int b[],int m,int n)
{
    unordered_set <int> s;
    for(int i=0;i<m;i++)
        s.insert(a[i]);
    for(int j=0;j<n;j++)
        s.insert(b[j]);
    return s.size();        
}