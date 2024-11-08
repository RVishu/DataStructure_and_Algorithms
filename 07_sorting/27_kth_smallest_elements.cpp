#include <bits/stdc++.h>
using namespace std;

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

#include <bits/stdc++.h>
using namespace std;

int H_partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
          i++;  /* code */
        } while (arr[i]<pivot/* condition */);
        do
        {
            j--;/* code */
        } while (arr[j]>pivot/* condition */);

        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }
}

//  NAVIE O(nlogn)
int Kth_Smallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
} 


int KthSmallest(int arr[],int n,int k)
{
    int l=0,r=n-1;
    while(l<r)
    {
        int p=L_Partition(arr,l,r);
        if(p==k-1)
        return p;
        else if(p>k-1)
        r=p-1;
        else
        l=p+1;
    }
    return -1;

} 

//quick select