#include <bits/stdc++.h>
using namespace std;

//naive solution - O(n^2 )
bool is0subarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==0)
            return true;
        }
    }
    return false;
}

// for EFFICIENT solution --> Use Prefix Sum & Hashing
bool isSum(int arr[],int n,int sum)
{
    unordered_set<int > s;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
       
        if(pre_sum==sum)
        return true;
        if(s.find(pre_sum-sum)!=s.end())
        return true;
        s.insert(pre_sum); 
    }
    return false;
}
//O(n) and O(n){due to hash table}

// here we try to find pre_sum-0 (value)