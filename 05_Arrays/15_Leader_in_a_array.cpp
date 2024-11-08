#include <bits/stdc++.h>
using namespace std;


void Leader(int arr[],int n)
{
    int t=0;
    int temp[n];
    for(int i=1;i<n;i++)
    {
        while(arr[t]>=arr[i])
        {
            temp[t]=arr[i];
            t++;

        }

    }
    cout<<temp<<endl;
}

int main()
{
    int n=7;
    int arr[n]={7,10,4,10,6,5,2};

    Leader(arr,n);

}

//NAIVE SSOLUTION- O(n^2)
void leaders(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<endl;
        }
    }
}

//EFFICEINT SOLUTION
void leader(int arr[],int n)
{
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<endl;
    for(int i=n-1;i>=0;i--)
    {
    if(arr[curr_ldr]<arr[i])
    {
        curr_ldr =arr[i];
        cout<<curr_ldr<<endl;
    }
    }
}

