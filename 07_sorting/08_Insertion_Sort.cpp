/*
-> O(n^2)
-> In-Place(if it doesn't ussse any Auxiliary Sspace or array in terms of Input Size) and Stable
-> Used in practice for small arrays (TimeSort and IntroSort)
-> O(n) in Best Case -> when input array is sorted
-> worst case when input array is reverse sorted;
-> we sort elemetn from i=1 , bcz first element is already sorted;

*/

void InsertionSort(int arr[],int n) // O(n^2)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key) // if arr[j]>= key --> then it will not stable
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
