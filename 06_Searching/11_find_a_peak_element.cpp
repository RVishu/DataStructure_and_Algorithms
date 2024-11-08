#include <bits/stdc++.h>
using namespace std;

int Peak_Element(int arr[],int n)
{
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-2]<arr[n-1]) return arr[n-1];
    for(int i=1;i<n;i++)  // here i <n-1 because that case already done
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            return arr[i];
            break;
        }
    }
    return -1;
}

int main()
{
    int n=7;
    int arr[n]={10,20,15,5,23,90,67};

    cout<<Peak_Element(arr,n);
}

//Sir solution  O(n)
int getPeak(int arr[],int n)
{
    if(n==1) return arr[0];
    if(arr[0]>=arr[1]) return arr[0];
    if(arr[n-1]>=arr[n-2]) return arr[n-1];

    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        return arr[i];
    }
}

//Efficient solution O(logn);
// Binary Search , here input array is not sorted still we apply binary search


int get_A_Peak(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid==0 ||arr[mid-1]<=arr[mid])&& (mid==n-1 || arr[mid+1]<=arr[mid]))
        return mid;

        if(mid>0 && arr[mid-1]>=arr[mid])
        {
            high=mid-1;   
        }
         else
            {
            low=mid+1;
            }
    }
    return -1;
}