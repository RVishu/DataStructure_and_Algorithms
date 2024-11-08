#include <bits/stdc++.h>
using namespace std;

void qSort(int arr[],int l,int r)
{
    Begin:
    if(l<r)
    {
      //  int p= partition(arr,l,r);
     //   qSort(arr,l,p);
     
    }
 //   l=p+1;
    goto Begin;
}
//tail call - bcz the last thing we are doing is recursion after that we do nothing 

  // qSort(arr,p+1,r); --> this line is deleted from above code from line