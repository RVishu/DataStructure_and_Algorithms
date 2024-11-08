#include <bits/stdc++.h>
using namespace std;

//no.of windows = n-k+1;

// NAIVE SOLUTION: O((n-k)*k*k)

void printDistWind(int arr[],int n,int k)
{
    for(int i=0;i<=n-k;i++)
    {
        int count=0;
        for(int j=0;j<k;j++)
        {
            bool flag=false;
            for(int p=0;p<j;p++)
            if(arr[i+j]==arr[i+p])
            {flag=true;break;}
            if(flag==false)
            count++;
        }
        cout<<count<<" ";
    }
}

// EFFICIENT SOLUTION- O(n) and O(k)

/*
    [10,20,10,10,30,40]
    1-create a frequency map of first k items 
        freq{10}=3 ,freq{20}=1;
    2- print size of frequency map.
    3- for(int i=k;i<n;i++)
        a-decrease frequency of arr[i-k]
        b-if the frequency of arr[i-k] became 0 , remove it from the map
        c-if arr[i] doesn't exist in the map,insert it, else increase its frequency in the map
        d-print size of the map.    
*/
