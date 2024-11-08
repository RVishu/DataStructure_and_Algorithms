#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION   O(n*m) --> it will work for any type of array - sorted or unsorted
void Intersection(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++) //it will run theta(n)
    {
        if(i>0 && a[i]==a[i-1]) // this is done to avoid printing duplicates
        continue;
        for(int j=0;j<n;j++) //it will ru O(n)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }

        }
    }
}

//EFFICIENT SOLUTION : theta(m+n) --> we use merge function of merge sort

void Intersection(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(a[i]<b[j]){i++;}
        else if(a[i]>b[j]){j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
}    