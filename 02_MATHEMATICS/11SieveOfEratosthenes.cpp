// // PRINTING ALL  PRIME NUMBERS WHICH ARE SMALLER THAN OR EQUAL GIVEN NUMBER

// //NAIVE SOLUTION
// void printprime(int n)
// {
//     for(int i=2;i<=n;i++)  // this line is thetha(n)
//     {
//         if(isprime(i))   //O(sqrt(n))
//         {
//             print(i);
//         }
//     }
// }

// //SIEVE OF ERATOSTHENES 
// //SIMPLE IMPLEMENTATION OF SIEVE

#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n+1,true);    //bool(size,t or f)
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=n;j=j+i)  // go through all the multiple of i and mark it false.

            {
                isPrime[j]=false;
            }
        }
    }
        for(int i=2;i<=n;i++)
        {
            if(isPrime[i])
            cout<<i<<" ";
        }
    }


    //OPTIMIZED IMPLEMENTATION
    void sieve(int n)
    {
        vector<bool> isPrime(n+1,true);  
        for(int i=2;i*i<=n;i++)
        {
            if(isPrime[i])
            {
                for(int j=i*i;j<=n;j=j+i)  //OPTIMIZED = j=i*i;
                isPrime[j]=false;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(isPrime[i])
            cout<<i<<" ";
        }
    }

    //SHORTER IMPLEMENTATION OF THE OPTIMIZED SIEVE


