#include <bits/stdc++.h>
using namespace std;

// Varition question -> mine solution (wrong)

int odd_occuring(int arr[],int n)
{
    
        int res=0;
    for(int i=0;i<n;i++)
    {
        res = (i+1) ^ arr[i] ^ res;
        if(res!=0)
            return i+1; 
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<odd_occuring(arr,n);

    return 0;

}