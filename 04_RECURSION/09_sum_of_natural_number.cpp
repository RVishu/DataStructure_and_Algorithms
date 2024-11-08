#include <bits/stdc++.h>
using namespace std;

int sum_of_natural_numbers(int n)
{
    if(n==0) return 0;

    return n+sum_of_natural_numbers(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_of_natural_numbers(n);

    return 0;
}