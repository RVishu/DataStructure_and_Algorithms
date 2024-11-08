/*
1) segregate positive and negative
2) segregate even and odd
3) sort a binary array
*/
#include <bits/stdc++.h>
using namespace std;

void Segregate_Pos_Neg(int arr[],int n)
{
     int temp[n] ,i=0;
     for(int j=0;j<n;j++)
     {
        if(arr[j]<0)
        {
            temp[i]=arr[j];
        }
     }

     for(int j=0;j<n;j++)
     {
        if(arr[j]>=0)
        {
            temp[i]=arr[j];
            i++;
        }
     }
     for(int j=0;j<n;j++)
     arr[j]=temp[j];
}
//theta(n) and theta(n)

//write a solution with 1 traversal, theta(n) and O(1) or theta(1) A.S

//--> IDEA : this problem is mainly a variation of partition () of Quick sort

// Hoore or Lommato Partition can solve this in theta(n) time and theta(1) Auxiliary Space
 
 void segPosNeg(int arr[],int n)
 {
    int i=-1,j=n;
    while(true)
    {
        do{i++;} while(arr[i]<0);
        do{j--;} while(arr[j]>0);
        if(i>=j)
        return;
        swap(arr[i],arr[j]);

    }
 }
