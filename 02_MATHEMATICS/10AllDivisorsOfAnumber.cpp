#include <bits/stdc++.h>
using namespace std;

void PrintDivisor(int n)
{

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;   //T.C --> thetha(n)
                            //A.S--> thetha(1)
        }
    }
}



// WRITE A SOLUTION THAT HAVE T.C LESS THAN THETHA(N) AND A.S THETHA(1)

void PrintDivisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)              //my solution
        {
            cout<<i;
            cout<<n/i;  //      PROBLEM: WHEN NUMBERS ARE SAME , REPPETATION;
        }
    }
}

//SIR SOLUTION  // BUT HERE ELEMENTS WILL NOT PRINT IN SORT ORDER

//T.C thetha(sqrt(n))  

void PrintDivisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)          
        {
            cout<<i;

        }
        if(i!=n/i)   // UNNNIQUE ELEMENTS ONLY
        {
            cout<<n/i;
        }
    }
}

// WRITE EFFICIENT SOLUTION WHICH PRINT ALL DIVISORS IN SORTED ORDER WITH T.C thetha(sqrt(n))

void printDivisor(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
       if(n%i==0)
       {
        cout<<i;
       }
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i;
        }
    }
}


   