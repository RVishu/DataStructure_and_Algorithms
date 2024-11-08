/*
1) sort an array of 0s ,1s and 2s;
2)Three way Partitioning
3)Partition Around a Range
*/

#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLTUION
/*
TIME:  theta(n)
AUX SPACE :theta(n)
FOUR TRAVERSAL
*/
void sort_3_types(int arr[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    if(arr[j]==0){temp[i]=arr[j];i++;}

    for(int j=0;j<n;j++)
    if(arr[j]==1){temp[i]=arr[j];i++;}

    for(int j=0;j<n;j++)
    if(arr[j]==2){temp[i]=arr[j];i++;}

    for(int j=0;j<n;j++)
    arr[j]=temp[j];
}

// WRITE AN EFFICIENT SOLUTION WITH GIVEN BELOW DESCRIPTION
/*
TIME:  theta(n)
AUX SPACE :theta(n)
FOUR TRAVERSAL
*/

// DUTCH NATIONAL FLAG ALGORITHM  --> Is is a variation of Horse's partition
void Sort(int arr[],int n)
{
    int low=0,high=n-1,mid=0;
    while(mid<=high)
    {   
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid==1])
        mid++;
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}