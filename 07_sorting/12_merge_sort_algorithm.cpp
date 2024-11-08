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


 void mergeSort(int arr[],int l,int r)
 {
    if(r>l) // at least two elemetns
    {
        int m= l+(r-l)/2; // we do this instead of m=(r+l)/2 to avoid overflow    } if l and r are high then overflow take place so that's why we do it
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        Merge_fuction(arr,l,m,r);

    }
 }   
 // every modification done in the same array 