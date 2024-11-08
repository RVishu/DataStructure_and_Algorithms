#include <bits/stdc++.h>
using namespace std;

//unsorted array --> hashing 
//sorted array--> 2 pointer method
/*

MY CODE

bool isPair(int arr[],int n,,int sum)
{
    int left=0,right =n-1;
    while(arr[left]+arr[right]!=sum)
    {
        if(sum>arr[left]+arr[right] && arr[left]<arr[right])
        {
            right--;
        }
        else if (sum>arr[left]+arr[right] && arr[left]>arr[right])
        {
            left++;
        }
        else 
        {
             
        }
    }
}
*/

//Sir Code; O(n)

bool isPair(int arr[],int n,int x)
{
    int left=0,right =n-1;
    while(left<right)
    {
        if(arr[left]+arr[right]==x)  return true;
        else if(arr[left]+arr[right]>x)
        right--;
        else
        {
            left++;
        }
    }
    return false;
}

// given asorted array and a sum , find if there is a triplet with given sum;

//NAIVE solution
int triplet(int arr[],int n,int x){
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
for(int k=j+1;k<n;k++)
if(arr[i]+arr[j]+arr[k]==x)
return true;
}

//O(n^2)--> in this we use isPair function call
int triplet(int a[],int n,int x){
for(int i=0;i<n;i++)
{
    //if(isPair(a,i+1,n-1,x-a[i]))
    return true;

    return false;
}
}

//  what if we are given a unsorted array and  a triplet sum --> first sort it
// O(nlogn) {for sorting} + O(n^2) { for finding }-->O(n^2)

// for srted aray upper method for triplet is better than sorting



// if pair then unsorted --> hashing is best



// best questions based on Two pointer approach

/*
1- count pairs with given sum.
2- count triplets with given sum.
3-find if there is a triplet a,b,c such that a^2+b^2=c^2;
*/