// Hoare's Partition >>>> Lomuto's partition

//O(n) and O(1)

/*
we consider first element as Pivot element
*/
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
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

//CORNER CASES
/*
--> when Pivot is smallest
{5,10,9,12}

--> all elements are same ==> hoare's partition is not stable
*/