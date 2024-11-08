#include <bits/stdc++.h>
using namespace std;

// array of pairs are sorted by default of baisi of first elements
// so we have to make my comparator function for this issue

int myCmp(pair<int,int> a,pair<int,int> b)  // here return type == voi (in video)
{
    return(a.second<b.second);
}

int MaxActivities(pair<int,int>arr[],int n)  // O(nlogn)
{
    sort(arr,arr+n,myCmp);
    int prev=0;
    int res=1;
    for(int curr=1;curr<n;curr++)  // theta(n)
    {
        if(arr[curr].first>=arr[prev].second)
        {
            res++;
            prev=curr;
        }
    }
    return res;

}