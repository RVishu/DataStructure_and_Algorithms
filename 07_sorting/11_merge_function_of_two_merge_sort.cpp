#include <bits/stdc++.h>
using namespace std;

void Merge_fuction(int a[],int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid;     // setting up auxiliary array
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){left[i]=a[low+i];}
    for(int i=0;i<n2;i++){right[i]=a[n1+i];}

    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]){a[k]=left[i];i++;k++;}
        else{a[k]=right[j];k++;j++;}
    }
    while(i<n1){a[k]=left[i];i++;k++;}
    while(j<n2){a[k]=right[j];j++;k++;}
}
//theta(n)  and theta(n)