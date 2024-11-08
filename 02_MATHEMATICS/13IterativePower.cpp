#include <bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0)  //OPTIMIZED--> if(n&1)
        res=res*x;
        x=x*x;
        n=n/2; //OPTIMIZED n=n>>1; (shift reaction)
    }
    return res;
}