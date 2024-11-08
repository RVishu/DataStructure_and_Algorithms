#include <bits/stdc++.h>
using namespace std;

// CONSIDERING LOMUTO PARTITIONING
void qSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=L_Partition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}

int L_Partition(int arr[],int l,int h)
{
    int pivot = arr[h]; //always last
    int i=l-1;
    for(int j=l;j<h-1;j++)  // till j<h-1
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);  // return of Pivot

}