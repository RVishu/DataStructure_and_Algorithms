#include <bits/stdc++.h>
using namespace std;


// int fact(int n)
// {
//    long long int temp=1;
//     for(int i=2;i<=n;i++)
//     {
//         temp = temp*i;
//     }
//     return temp;
// }


// int tz(long long int n)
// {
//     int temp =0;
//     int num =0;
//     while(temp==0){
//     n=n/10;
//     temp=temp*10+n%10;
//     num++;
//     }
//     return num;
// }

// int main()
// {
//     int n;
//     cin>>n;
//                                     //cout<<fact(n)<<endl;    WHY  SIGTERM?  WHY TIME LIMMIT EXCEEDD?

//     cout<<tz(fact(n))<<endl;

// }


// NAIVE METHOD

// SIR SOLUTION



// int countZeros(int n)
// {
//     int fact=1;
//     for(int i=2;i<=n;i++)
//     {
//         fact =fact*i;
//     }

//     int res=0;
//     while(fact%10==0)
//     {
//         res++;
//         fact=fact/10;
//     }
 
//     return res;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<countZeros(n)<<endl;
// }

// even thhis solution have chance of cross oversflow even 
//for slightly higher values of n;

//   write a solution which don't have overflow issues and time complexity will be less than O(n);

int countTrailingZeros(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res = res + n/i;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<countTrailingZeros(n)<<endl;
}







// // int factorial_Recursive(int n)
// // {
// //     if(n==0 || n==1)
// //         return 1;
        
// //     return factorial_Recursive(n-1)*n;

// //                                                     //return (n-1)*factorial_Recursive(n-1); --> wrong approach
// // }


// // int trailing_zeroes(int n)
// // {
// //     int m=factorial_Recursive(n);
// //     int zeroes =0;

// //     while(m%10==0)
// //     {
// //         zeroes++;
// //         m/=10;
// //     }

// //     return zeroes;
// // }

// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     cout<<factorial_Recursive(n)<<endl;
// //     cout<<trailing_zeroes(n);

// //     return 0;
// // }

// /*
//  the approach to count trailing zeroes has a flaw.
//   Calculating the factorial of large numbers using recursion and then directly counting the trailing zeroes is inefficient
//    and impractical for large values of n because factorials grow very quickly and can result in integer overflow.
// */

// //efficient approach

// int trailing_zero(int n)
// {
//     int count=0;
//     for(int i=5;n/i>=1;i*=5)
//     {
//         count+= n/i; 
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<trailing_zero(n);

//     return 0;

// }