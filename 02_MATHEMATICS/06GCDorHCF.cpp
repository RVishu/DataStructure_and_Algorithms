#include <bits/stdc++.h>
using namespace std;

//WRITING FUNCTION FOR HCF OF 2 NO.

int gcd(int a,int b)
{
    int res =min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res; 
}

//EUCLIDEAN ALGORITHM

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
       
    }
     return a;
}

//OPTIMIZED CODE

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}