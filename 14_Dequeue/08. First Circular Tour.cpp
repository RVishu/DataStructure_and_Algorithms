#include <bits/stdc++.h>
using namespace std;

  //Naive Solution -- O(n2)
   

int firstPetrolPump(int petrol[],int dist[],int n)
{
    for(int start=0;start<n;start++)
    {
       int curr_petrol = 0;
       int end=start;
       while(true)
       {
        curr_petrol += (petrol[end]-dist[end]);
        if(curr_petrol <0)
            break;
        end = (end+1)%n;
        if(end==start)
            return (start+1);    
       }
    }
    return -1;
}

// O(n) and A.S O(n)
/*
-keep adding items to the end of the deque while(curr_petrol is >= 0)
-keep removing items from the front of deque while curr_petrol is negative
*/


// first circuar tour - Efficient solution O(n) and O(1)

int FirstpetrolPump(int petrol[],int dist[],int n)
{
    int start=0,curr_petro=0;
    int prev_petrol=0;
    for(int i=0;i<n;i++)
    {
        curr_petro += (petrol[i]-dist[i]);
        if(curr_petro<0)
        {
            start=i+1;
            prev_petrol += curr_petro;
            curr_petro =0;
        }

    }
    return ((curr_petro+prev_petrol>=0))?(start+1):-1;
}