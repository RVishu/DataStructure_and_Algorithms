#include <bits/stdc++.h>
using namespace std;

void print1toN(int n)
{
    
    if(n==0)
    return;  
    print1toN(n-1);     //T(n)=T(n-1)+theta(1) --> theta(n) 
    cout<<n <<" ";      // A.S = O(n);
}
int main()
{
    print1toN(7);
}