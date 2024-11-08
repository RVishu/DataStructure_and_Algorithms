#include <bits/stdc++.h>
using namespace std;

//MINE SOL
// int Print(int n)
// {
//     if(n==0)
//     return 0;
//     else   
//     cout<<n<<" ";
//     Print(n-1);      for n=1 ; it will also give 0;
//     return 0
// }

//SIR SOLUTION
void printNto1(int n)
{
    if(n==0)
    return ;
    cout<<n<<" ";
    printNto1(n-1);
}                           //T(n)=T(n-1)+theta(1)   using recursinng tress--> theta(n)
int main()                  //Auxiliary Space is theta(n)
{
    int n=4;
    printNto1(4);
    return 0;
}