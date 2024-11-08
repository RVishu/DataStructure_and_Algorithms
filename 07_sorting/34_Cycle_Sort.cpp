/*
it is a O(n^2 ) worst case algorithm
it is optimum in terms of memory writes(does minimum memory writes and can be useful for cases where memory writes is costly)
--> * useful to solve questions like FIND MINNIMUM SWAPS REQUIRED TO SORT AN ARRAY *
*/

//ASSUMING NO duplicates are there.
#include <bits/stdc++.h>
using namespace std;

void cycleSortDistinct(int arr[],int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
        {
            if(arr[i]<item)
            {
                pos++;
            }
            swap(item,arr[pos]);
        }
        while(pos !=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
            if(arr[i]<item)
            pos++;
            swap(item,arr[pos]);
        }
    }

}