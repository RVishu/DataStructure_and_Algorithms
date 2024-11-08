#include <bits/stdc++.h>
using namespace std;

int findlongest(int arr[],int n)
{
    sort(arr,arr+n); // nlogn
    int res=1 ,curr=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        curr++;
        else 
        {
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;

}

//EFFICEINT - using hash table , O(n)

/*


    1-initalize : res=0;

    2-create a hash table h;

    3-insert all elements into h;  //O(n)

    4-for(i=0;i<n;i++)
        if arr[i]-1 is not present in h
        curr=1;
        while(h contains arr[i]+curr)
            curr++;
        res = max(res,curr);

    5-Return res;        


*/