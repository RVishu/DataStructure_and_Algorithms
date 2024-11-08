#include <bits/stdc++.h>
using namespace std;

int Hoare_partition(int arr[],int l,int h)
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

void qSort(int arr[],int l,int h)
{
    if(l<h)
    {   
        int p =Hoare_partition(arr,l,h);
       // qsort(arr,l, p);
        qSort(arr,p+1,h);
    }
}
//Considering hoare's Partition