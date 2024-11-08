#include <bits/stdc++.h>
using namespace std;


//MINE SOLUTION
// int CountSetBit(int n)
// {
//     int res =0;
//     while(n!=0)   -> here we can consider negative number ,,so change it to n>0
//     if(n&1!=0)
//     {
//         res++;
//         n>>1;
//     }
//     else
//     {
//         n>>1;
//     }

//     return res;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<CountSetBit(n);
// }

                //NAIVE SOLUTION

 int countSet(int n)
 {
    int res=0;
    while(n>0)
    {
        if(n%2!=0)  //==> if((n&1)==1) ==>>>> res=res+(n&1) best way to write
                    //res++;
        res++;
        n=n/2;   // n=n>>1;

        //we have to also eliminate last digit so we can do n=n/2;
        // also we can do bit wise
    }
 }               

// this code's time complexity is theta(total bits in n)

//CODE 2--> BRIAN KERNINGAM'S ALGORITHM   --> time complexity theta(Set Bit Count)

int coutBits(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1));
                //theta(total set bit)
        res++;
    }
    return res;
}




















