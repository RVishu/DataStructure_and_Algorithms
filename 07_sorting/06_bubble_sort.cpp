   #include <bits/stdc++.h>
   using namespace std;
   // O(n^2)

   void bubbleSort(int arr[],int n)
   {
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1;j++)  // optimization j<n-i-1
    {
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    } 
   }

//Optimized Bubble Sort //O(n)

void bubbleSORT(int arr[],int n)
{
    bool swapped=false;
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
    }
    if(swapped==false)
    {
    break;
    }
}
}