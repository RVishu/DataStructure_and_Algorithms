#include <bits/stdc++.h>
using namespace std;
/*
void ZeroToEnd(int arr[],int n)
{
    int start=0;
    int last =n-1;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==0 && arr[start]!=arr[last])
    {
        swap(arr[start],arr[last]);
        start++;
        last--;
    }

    cout<<arr<<endl;
    

    }
    return;
}

int main()
{
    int n;
    int arr[7]={1,3,0,4,0,55,5};
    ZeroToEnd(arr,n);
}
*/


//NAIVE SOLUTION  //O(n^2)
/*

void moveToEnd(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;i<n;j++)
            {
                if(arr[j]!=0)
                swap(arr[i],arr[j]);
            }
        }
    }
}
*/



//EFFECIENT METHOD , O(n) time complexity;  (DBM)
/*
void zero(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       int  j=1;
        if(a[i] =0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    cout<<a[n]<<endl;
    
}

int main()
{
    int n=5;
    
    int a[n]={1,0,0,3,0};
    zero(a,n);
}

*/

//Sir Effecient Method

void moveZeros(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}