#include <bits/stdc++.h>
using namespace std;

// int jos(int n,int k)
// {
//     int a[n]={1};
//      for (int i=0;i<n;i++)
//      {
//         a[k]={0};
//      }   
//     cout<<
// }

int jos(int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        return(jos(n-1,k)+k)%n;
    }

   
}

// time complexity = t(n)=t(n-1)+c;


// if countinng begins from 1 instead of zero then

int jos(int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        return(jos(n-1,k)+k)%n;
    }
}
int myjos(int n,int k)
{
    return jos(n,k)+1; 
}