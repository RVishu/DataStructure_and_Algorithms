#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION - O(n^2)
int longestSub(bool arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int c0=0,c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
                c0++;
            else
            c1++;

            if(c0==c1)
                res=max(res,j-i+1) ;  
        }
    } return res;
}

// HINT: this problem is going to reduce into the problem of finding length of longest subarray with sum= 0;
// TRICK : if we replace every zero with -1;

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
// O(n) and O(n)