#include <bits/stdc++.h>
using namespace std;

int LCM(int a,int b)
{
    int res =max(a,b);  //JAVA =>> res=math.max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
        {
            return res;   //O(a*b) or O(a*b-max(a,b))
        }
         
         res++;

    }

    return res;
}

//EFFICIENT SOLUTION FOR LCM OF 2 NUMBERS.


int gcd(int a, int b)
{
    if(b==0){
        return a;

        return gcd(b,a%b);
    }
    int lcm(int a,int b);
    {
        return (a*b)/gcd(a,b);
    }
}