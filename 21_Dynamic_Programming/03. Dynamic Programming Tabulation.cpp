/*
Tabulation -> means Bottom top

So here , Leave recursion if Problem have input n 
    and its solution depends upon n-1,n-2,...3,2,1,0 
        then we first calculate these soltuions so that whenever we need this for our
        n problem soltuion it will be there
THE RULE OF 
    SIZE, DIMENSION,VALUE all are same as in memoization  

** HERE WE NEED TO TAKE CARE OF DEPENDENCY
    - means main prob is depend on = f[n-1] ,f[n-3],f[n+1] like that          

*/

#include <bits/stdc++.h>
using namespace std;

int fib(int n)    // theta(n) time , theta(n) Aux space
{
    int f[n+1];  // space used  theta(n)
    f[0]=0;   // here solution of sub problem , before
    f[1]=1;

    for(int i=2;i<n;i++)
        f[i]=f[i-1]+f[i-2];    // using solution of subproblem 

    return f[n];    

}


// USE GFG ARTICLE TO FIND - nth fibonnaci no. in O(logn) time -> the approach is divide and conquer(matrix Multiplication)

// it doesn't require Recursion call overhead  -> benefits over memoization
// Tabulation mehtods are faster  && memoizationa are easy to implement