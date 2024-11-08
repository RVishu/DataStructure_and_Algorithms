#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    if(arr[i]==x)
              return i;

    return -1;
}

//O(logn ), O(1)

int Search(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==x) return mid;
        if(arr[0]<arr[mid])
        {
          if( arr[mid]>x && arr[0]<=x)
            {
            high=mid-1;
            }
            else
            low=mid+1;
        }
        else
        {
            if(x>arr[mid] && x<=arr[high])
            low=mid+1;

            else
            high =mid-1;
        }
    }
    return -1;
}