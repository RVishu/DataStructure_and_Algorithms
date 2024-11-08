#include <bits/stdc++.h>
using namespace std;

//QUES-01
// int fun(int n)
// {
//     if(n==1)
//     return 0;
//     else
//     return 1+fun(n/2);
// }

//--> answer== log2(n) --> for n == 2^any number.



//QUES-02   IT PRINTS BINARY EQUIVALENT OF N WHERE N>0;

void fun(int n)
{
    if(n==0)
    return;
    fun(n/2);
    cout<<n%2<<endl;  
}











