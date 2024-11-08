#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n<=0)
    return 0;

    return n%10 + sum(n/10);    //time complexity = theta(digit)
                                // auxiliary space = theta(digit)   to remove one recursive call try to n<= (first digit from left-1 )
}

int main()
{
    int n; 
    cin>>n;
    cout<<sum(n)<<endl;
}

//iterative solution
int getsum(int n)
{
    int res=0;
    while(n>=0)
    {
        res=res+n%10;
        n=n/10;
    }
    return res;
}
//time complexity = theta(digit)
// auxiliary space = theta(1)