#include <bits/stdc++.h>
using namespace std;

// int rope(int n,int a,int b,int c)
// {
//    if( n/min_element(a,b,c) !=0 )
//    {
//     cout<<n/min_element(a,b,c)<<endl;
//    }
   


// int rope (int n,int a,int b,int c)
// {
//    if((n/a || n/b || n/c) !=0)
//    {
//       cout<<max(n/a ,n/b, n/c)<<endl;
//    }
//    return max(n/a ,n/b, n/c) ;
// }
// int main()
// {
//    int n,a,b,c;
//    cin>>n>>a>>b>>c;
//    cout<<rope(n,a,b,c)<<endl;
// }

int maxPieces(int n,int a,int b,int c)
{
   if(n==0)return 0;
   if (n<0) return -1;
   int res = max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c));
   if(res==-1)
   return -1;
   return res+1;
}

//interesting corner case : n=9 ,a=b=c=2;   time complexity = O(3^n )