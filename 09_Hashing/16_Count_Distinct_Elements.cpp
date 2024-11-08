#include <bits/stdc++.h>
using namespace std;

//Navie solution--> O(n^2) and O(1)
int countDis(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        bool flag =false;  // this means that current element is not seen on left side
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        res++;
    }
    return res;
}

//EFFICIENT SOLUTION -> USING HASHING-> theta(n) and O(n)

int CountDistinct(int arr[],int n)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    return s.size();
}

//IMPROVED EFFICIENT IMPLEMENTATION --> theta(n) and O(n)
int CountDistinct(int arr[],int n)
{
    unordered_set <int> s(arr,arr+n);
  
    return s.size();
}
