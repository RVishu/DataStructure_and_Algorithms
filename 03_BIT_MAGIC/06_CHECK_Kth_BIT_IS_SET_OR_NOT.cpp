//CHECK  IF Kth BIT IS SET

#include <bits/stdc++.h>
using namespace std;

//METHOD 1 (USING LEFT SHIFT OPERATOR(<<))
void KthBit(int n,int k)
{
    if(n & ( 1<<(k-1))!=0)
    cout<<"yes\n";
    else
    cout<<"No\n";
}

int main()
{
    int n,k;
    cin>>n>>k;
    KthBit(n,k);

    return 0;


}