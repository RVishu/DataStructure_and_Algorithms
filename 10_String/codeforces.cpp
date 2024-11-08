#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k,a1,ak,res,i,j;
    int t;
    cin>>t;
    cin>>m>>k>>a1>>ak;
    while(t--)
    {
        if(ak>=m/k)
        {
            if(a1>m%k)
            return 0;
            else
            return m%k-a1;
        }
        else
        {
            if(a1>=m%k)
            return m/k+(m%k-a1);
            else
            return m/k+(a1-m%k);
        }
    }

    return 0;
    
}    