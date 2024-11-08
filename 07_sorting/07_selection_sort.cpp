#include <bits/stdc++.h>
using namespace std;

/*
theta(n^2)
- it does less memory writes commpared to quick sort, merge sort,insertion but CYCLE sort is optimal in terms of memory writes.
-> basic idea for heap sort not stable
-> it's an inplace algo, it does'nt require extra memory for sorting

selection sort-> we find out min element and put it in first position

*/

//Naive implementation
/*
void selectSort(int arr[],int n)
{   
    int INF; // -infinite
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ind=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind =j;
            }
           
        }
         temp[i]=arr[min_ind];
            arr[min_ind]=INF;
    }
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
}
*/
// In-Place Implementation --> it doesn't use extra array

void  SelectionSort(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
       int min_ind=i;
       for(int j=i+1;j<n;j++) // optimized by j<n-1;
       {
        if(arr[j]<arr[min_ind])
        {
            min_ind =j;
        }
       }
       swap (arr[min_ind],arr[i]);
    }
}

// selection sort is not called Stable(not )
