#include <bits/stdc++.h>
using namespace std;

/*

//WRONG SOLTION (DBM);

void Reverse(int arr[],int Temp[],int n)
{
    
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            arr[i]=Temp[j];
        }
    }
    cout<<Temp<<endl;

}


int main()
 {
    int n;
    
    int arr[4]={1 ,24,45,6},Temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Reverse(arr,Temp,n);
 }
*/

//SIR sOLUTION --> swap arr[low] and arr[high]

void reverse(int arr[],int n)
{
    int low =0,high=n-1;
    while(low<high)
    {
        int temp=arr[low]; 
        arr[low]=arr[high];  //theta(n);  auxiliary space = theta(1)
        arr[high]=temp;
        low++;
        high--;
        
    }
}