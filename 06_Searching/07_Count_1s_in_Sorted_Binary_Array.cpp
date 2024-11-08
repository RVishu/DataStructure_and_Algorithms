#include <bits/stdc++.h>
using namespace std;


/*  
My solution -> Not workinh

int Count1s(int arr[],int n)
{
   int count=0;
   
   for(int i=0;i<n;i++)
   {
        if(arr[i]==1)
        {
            count++;
            break;
        }
   } 
   return 0;
}

*/




// O(n)  

int Count1s(int arr[],int n)
{
   int count=0;
   
   for(int i=0;i<n;i++)
   {
        if(arr[i]==1)
        {
            cout<<n-i;
        }
   } 
   return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<Count1s(arr,n);
}
// use binary Seach for O(logn)
// Concept is finding first occurence of the solution

int countOnes(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
        {
            low =mid+1;
        }
        else 
        {
            if(mid==0 || arr[mid-1]!=arr[mid]) // arr[mid-1]==0;
            return (n-mid);
            else
            high=mid-1;
        }


    }
    return 0;
}