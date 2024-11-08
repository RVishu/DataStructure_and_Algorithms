#include <bits/stdc++.h>
using namespace std;

// EXAMPLE OF TAIL RECURSION
void fun(int n)
{   //start        tail call elimination(modern compiler do for optimize the code)
    if(n==0)
    return ;
    cout<<n<<" ";
    fun(n-1);  //--> is replaced by n=n-1 ; go to start;
}

// EXAMPLE OF NON-TAIL RECURSION
void fun1(int n)
{
    if(n==0)
    return ;
    fun(n-1);
   cout<<n<<" ";
}

// try to change the code from line 13 to tail recusive code;
void fun(int n,int k)
{
    if(n==0)
    return ;
    cout<<k<<" ";
    fun(n-1,k+1);

}