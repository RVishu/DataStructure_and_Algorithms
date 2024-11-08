#include <bits/stdc++.h>
using namespace std;

// NAIVE O(n^2) and O(1)
int maxCommon(bool arr1[],bool arr2[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
            sum1 +=arr1[j];
            sum2 +=arr2[j];
            if(sum1==sum2)
                res=max(res,j-i+1);
        }

    }
    return res;
}

// EFFICIENT - O(n) and O(n)

//HINT: this problem is going to reduce into the problem of finding the longest subarray with sum=0;
// IDEA: we substract one arrays from other array


/*

int temp[n];
for(int i=0;i<n;i++)
    temp[i]=arr1[i]-arr2[i];


    int maxlen(temp[],int n)
*/    