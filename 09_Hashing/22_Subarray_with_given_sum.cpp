#include <bits/stdc++.h>
using namespace std;

//naive solution - O(n^2 )
bool issum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==sum)
            return true;
        }
    }
    return false;
}

// for EFFICIENT solution --> Use Prefix Sum & Hashing
bool is0subarray(int arr[],int n)
{
    unordered_set<int > h;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(h.find(pre_sum)!=h.end())
        return true;
        if(pre_sum==0)
        return true;
        h.insert(pre_sum);
    }
    return false;
}
//O(n)