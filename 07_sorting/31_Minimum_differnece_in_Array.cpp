#include <bits/stdc++.h>
using namespace std;

//DBM
/*
int MinDiff(int arr[],int n)
{   int res;
    if(n==2) return arr[0]-arr[1];
    if(n==1) return INT_MAX;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {   if(arr[i]>arr[j])
    {
       res = arr[i]-arr[j];
       res=min(res,arr[i]-arr[j]) ;
    }
    else 
    {
        res = arr[j]-arr[i];
       res=min(res,arr[j]-arr[i]) ;
    }
    }
    return res;
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
    cout<<MinDiff(arr,n);

}

*/
// theta(n^2)
int getMinDiff(int arr[],int n)
{
    int res=INT_MAX;
    for(int i=1;i<n;i++)
        for(int j=0;j<n;j++)
            {
                res=min(res,(arr[i],arr[j])); // (arr[i],arr[j]) it should be ABSOLUTE
            }
    return res;        
}

// EFFICIENT SOLUTION --> overall time : O(nlogn)

int getMinDif(int arr[],int n)
{
    sort(arr,arr+n);  // O(nlogn)
    int res=INT_MAX;
    for(int i=1;i<n;i++)  // theta(n)
    {
        res=min(res,arr[i]-arr[i-1]);
    }
    return res;
}



