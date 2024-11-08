#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int n)
        // n=abs(n);   for handling negative values of n;
{
    if(n%10==n)
        return n;

    return sum_of_digits(n%10)+sum_of_digits(n/10);    // here just sum_of_digits(n%10) == n%10 only then it is best
}


/*

  Analysis:

Base Case: The base case checks if n is a single-digit number (n % 10 == n), in which case it returns n.
Recursive Case: The function calls itself twice: once with n % 10 (the last digit) and once with n / 10 (the number without the last digit).
Problems:

Redundancy: The function is redundant because sum_of_digits(n % 10) will always return n % 10 due to the base case. This means that every recursive call with n % 10 is unnecessary.


Inefficiency: The function has exponential time complexity 
𝑂(2^d)
 where d is the number of digits in n. This is because for each digit, it makes two recursive calls.
*/


int main()
{
    int n;
    cin>>n;

    cout<<sum_of_digits(n);

    return 0;
}