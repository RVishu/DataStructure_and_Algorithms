#include <bits/stdc++.h>
using namespace std;

// my code

bool palindrome(int n)
{
    int m =n;
    int p =0;

    // while(m>0)  -> it was condition brute force

    while(floor((log10(m)+1)>=floor((  log10(n) + 1 ) / 2 )))  // to optimize here we can use count of digit;  example while(logm>=logn)
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

int main()
{
    int n;
    cin>>n;
    cout<<palindrome(n);


    return 0;
}