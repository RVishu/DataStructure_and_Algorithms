#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int m =n;
    int p =0;

    while(m>0)
    {
        if(m==p)
            return true;

        p = p*10 + m%10;

        if(m==p)
            return true;
            
        m = m/10; 

            
    }

    return false;
}