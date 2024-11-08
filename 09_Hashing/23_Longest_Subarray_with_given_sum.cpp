#include <bits/stdc++.h>
using namespace std;

//naive solution - O(n^2 ) and O(1)
bool Max_Len(int arr[],int n,int sum)
{
   
    
        int res=0;
        for(int i=0;i<n;i++)
        {
            int curr_sum=0;
            for(int j=i;j<n;j++)
            {
            curr_sum+=arr[j];
            if(curr_sum==sum)
                res=max(res,j-i+1);
            }
            
        }
    
    return res;
    
}

// for EFFICIENT solution --> Use Prefix Sum & Hashing
int  maxlen(int arr[],int n,int sum)
{
    unordered_map<int,int > m;

    int pre_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum ==sum)
       res=i+1;
        if(m.find(pre_sum)==m.end())
        m.insert({pre_sum,i});
        if(m.find(pre_sum-sum)!=m.end())
        res=max(res,i-m[pre_sum-sum]) ;      
    }
    return res;
}
//O(n) and O(n)