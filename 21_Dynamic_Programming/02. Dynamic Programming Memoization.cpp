/*

*/


#include <bits/stdc++.h>
using namespace std;

// question find nth fibonacci Number 


// Recursive Solution - Exponenetial Time Complexicity - O(2^n)
int fib(int n)  
{
    if(n==0 || n==1)
        return n;
    else 
        return fib(n-1)+fib(n-2);    
}


// Using Dynamic programming (Memoization)

// vector<int> memo(6);
// int fillValue=-1;
// fill(memo.begin(),memo.end(),fillValue);

/*
int memo[n+1] ={-1,-1,-1,...-1}

int fib(int n)  
{
    if(memo[n]==-1)

    {
        int res;
        if(n==0 || n==1)
        return n;
    else 
        return fib(n-1)+fib(n-2); 

    memo[n]=res; 
    
    }   
    return memo[n]   
}

we made total (2n-1) function call , left (n) and right(n-1 )

time complexicity = (2n-1)*theta(1)= theta(n)

MEMOIZATION
    - dIMENSION - if 1 parameter than memo is linear (here only n -> so linear)
    -  (he values inside it, ) -> which will not Possible solution of problem
        e.g ==> n goes from 0 to n , so we chose -1 

    -SIZE->IS DETERMINE BY MIN AND MAX VALUE , here it is n+1
*/  