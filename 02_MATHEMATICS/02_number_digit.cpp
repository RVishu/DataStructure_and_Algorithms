#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int digits = 0; // never forget initialization
    while(n>0)
    {
        digits++;
        n= n/10;
    }
    cout<<digits;
}


/*
The time complexity of the provided code is O(log⁡10(n))
Explanation:The while loop runs as long as n is greater than 0.
In each iteration, n is divided by 10,
 reducing the number of digits by one.
 Therefore, the number of iterations is equal to the number of digits in n.
 The number of digits in a number n is approximately log⁡10(n)
 Thus, the time complexity is O(log⁡10(n)).

*/