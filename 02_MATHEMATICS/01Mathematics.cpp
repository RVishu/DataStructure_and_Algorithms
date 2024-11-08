// finding number of digit in a number
#include <bits/stdc++.h>
using namespace std;

int main ()
{
   long long  int n;
    cin>>n;
    long long int sum=0;
    int x;


    while(n!=0){
        x=n/10;
        n=x;   // n=n/10;
        sum =sum+1;
    }

    cout<<sum<<endl;
    return 0;
}

// // ITERATIVE SOLUTION

// int countDigit(long n)
// {

//     int count =0;
//     while (n!=0){
//         n=n/10;
//         ++count;
//     }
//     return count;
// }

// // RECURSIVE SOLUTION

// int countDigit(long n)
// {
//     if(n==0)
//     return 0;
//     return 1 + countDigit(n/10);
// }

// //LOGARITHMIC SOLUTION
// int countDigit(long n)
// {   
//     return floor(log(n)+1);  // DIGIT COUNT WILL BE UPPER BOUND OF logN

// }

// every prime no. can be represented in form of 6n+1 or 6n-1 except 2 and 3; wheree n is natural number;