/*
partition means all the elements before a given no. K should be on left and vice-versa;
left no. before k need not to be in sorted
*/

// DBM  --> WRONG
void partition(int arr[],int n,int p)
{
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[p])
        {
        temp[j]=arr[i];
        j++;
        }
        else
        {
            temp[j]=arr[i];
        }
    }
    

}

//NAIVE SOLUTION;  O(n) , O(n)--> STABLE
void partition (int arr[],int l,int h,int p)
{
    int temp [h-l+1] ,index=0;
    for(int i=l;i<=h;i++)
    if(arr[i]<=arr[p])
    {
        temp[index]=arr[i];
        index++;
    }
    for(int i=l;i<=h;i++)
    if(arr[i]>arr[p])
    {
        temp[index]=arr[i],index++;

    }
    for(int i=l;i<=h;i++)
    {
       arr[i]=temp[i=l];
        
    }
}


