#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0) return 1;

    return n*factorial(n-1);
}


int fib(int n)
{
    if(n==0) return 0;    // also can write here if(n<=1) return n;
    
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);
}