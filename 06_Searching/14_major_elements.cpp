#include <bits/stdc++.h>
using namespace std;

//NAIVE O(n^2)
int findMajority(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int count =1;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
        if(count>n/2)
        {
            return i;
        }
    }
    }
    return -1;
}

//O(n)
