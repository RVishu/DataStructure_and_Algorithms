#include <bits/stdc++.h>
using namespace std;


// NAIVE SOLUTION
int power(int x,int n)
{
    int res=1;
    for(int i=0;i<n;i++)  //thetha(n)
    res=res*x;
    return res;
}

//EFFICIENT SOLUTION
 int power(int x,int n)
 {
    if(n==0)
    return 1;

    int temp = power(x,n/2);
    temp =temp*temp;
    if(n%2==0)
    return temp;
    else return temp*n;
    
 }