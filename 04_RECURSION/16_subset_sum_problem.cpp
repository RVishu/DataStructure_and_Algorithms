#include <bits/stdc++.h>
using namespace std;

int countSubsets(int arr[],int n,int sum)
{       
    if(n==0)
    {
        return (sum==0)?1:0;
        return countSubsets(arr,n-1,sum)+countSubsets(arr,n-1,sum-arr[n-1]);
    }
     
}

//time  complxity theta(2^n);

