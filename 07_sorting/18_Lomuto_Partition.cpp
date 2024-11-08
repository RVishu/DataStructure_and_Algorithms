// traverse only once so time is O(n) and Auxiliary Space O(1)

/*
here we always assume that pivot is last element of array , arr[n-1];
*/
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
// corner cases :
/*

{70,60,80,40,30}

{30,40,20,50,80}   swap every element with itself

*/

// HOW TO HANDLE THE CASES WHEN PIVOT IS NOT THE LAST ELEMENTS ?
/*
just swap the given pivot element with last element;

like 
{50,30,20,10,5,11}  and p=2 -> arr[2]=20;

swap(arr[p],arr[h])

*/