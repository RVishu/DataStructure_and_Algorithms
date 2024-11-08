#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION - O(n^2) and O(1)

void print_freq(int arr[],int n)
{
   for(int i=0;i<n;i++)
    {
        bool flag =false;  // this means that current element is not seen on left side
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;   // check if seen before.
            }
        }
        if(flag==true)
        continue; // if seen Ignore
        int freq=1;
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j])
            freq++;
        cout<<arr[i]<<" "<<freq<<endl;   // if not seen before ,count frequency
    }
    
}

// EFFICIENT SOLUTION -> Using Hash Map (key ,value ) =>> array values as keys  , and their frequencies as Values 
int count_Freq(int arr[],int n)
{
    unordered_map<int,int> h;
   // for(int x:arr)
//    h[x]++; // arraay index operator on hashmap , if key is not present hten it will give it value =0;
    for(auto e:h)  // auto alows to not specify data type in every time.
        cout<<e.first<<" "<<e.second<<endl;
}

// theta(n) and O(n)