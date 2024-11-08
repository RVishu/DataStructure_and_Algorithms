/*
a pair (arr[i],arr[j]) forms an inversion when i<j and arr[i]>arr[j]
*/
#include <bits/stdc++.h>
using namespace std;

// DBM
int count_inversion(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++) // to optimize i<n-1
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                res++;
            }
        }
    }
    return res;
}
// when array is sorted and in decreasing order than it will form {n*(n-1)}/2

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<count_inversion(arr,n);
}


//Efficient solution --> Idea is Based on Merge Sort
// O(nlogn)
// View Theory in Video
int Count_Inversion(int arr[],int l,int r)
{
    int res=0;
    if(l<r)
    {
        int m = l+(r-l)/2;
        res +=Count_Inversion(arr,l,m);
        res +=Count_Inversion(arr,m+1,r);
       res += Count_and_merge(arr,l,m,r);

    }
    return res;
}

// this function is very similar to merge function of merge sort;

int Count_and_merge(int arr[],int l,int m ,int r)
{
    int n1=m-l+1,n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){left[i]=arr[l+i];}
    for(int i=0;i<n2;i++){right[i]=arr[m+1+i];}
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]){arr[k]=left[i];i++;}
        else{arr[k]=right[j];j++;res=res+(n1-i);}
        k++;
    }
    while(i<n1){arr[k]=left[i];i++;k++;}
    while(j<n2){arr[k]=right[j];j++;k++;}

    return res;
}
// O(nlogn) , O(n)