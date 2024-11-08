/*
NAIVE SOLUTION -O(n^3)  n^2 for tranversal and n for deleting

start=min(i1.start,i2.start)
end=max(i1.end,k=i2.end);
*/

/*
EFFIECIENT SOLUTION
1) sort by start time in increasing order
2) sort by end time in decreasing order

so we will chose method 1  
see video at 18:41 for concept

x(i).start>=m(j).start
m(j-1).end<m(j).start
x(i).start>m(j-1).end

m(j-1)={5,10}
m(j)={11,20}
x(i)={15,30}
*/

// O(nlogn)  IMPLEMENTATION

/*
we will consider Interval as structure
*/
#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int st,end;
};
void mergeIntervals( Interval arr[],int n)
{
   // sort(arr,arr+n,myComp) //myComp is a commprator function which allows us to sort the intervals in increasing start time
    int res=0;
    // we are going to merge in same array, we are not going to store in any temp array
    for(int i=1;i<n;i++)
    {
        if(arr[res].end>=arr[i].st)
        {
            arr[res].end=max(arr[res].end,arr[i].end);
            arr[res].st=min(arr[res].st,arr[i].st);
        }
        else{res++;arr[res]=arr[i];}
    }
    for(int i=0;i<=res;i++)
    cout<<arr[i].st<<" "<<arr[i].end<<endl;
}
