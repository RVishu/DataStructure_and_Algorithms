#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   if(n==1)
   {
        return false; 
   }
   //else      // no need to write else after if;
    {
        for(int i=2;i<n;i++)     //=sqrt(n)
      //  {      // no need this bracket after for 
            if(n%i==0)
         //   {
                return false;
       //     }
            
       // }
    }
    return true; 
}

int main()
{
    int a;
    cin>>a;
    cout<<isPrime(a)<<endl;
}


// for more efficient for(int i=2;i*i<=n;i++)

//most efficient method; 
// by this below we skippid many iterations;

 