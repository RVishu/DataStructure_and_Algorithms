/*
NAIVE SOLUTION-O(n2) and O(1)

void printCeiling(int arr[],int n)
{
    cout<<-1;
    for(int i=1;i<n;i++)
    {
        int diff=INT_MAX;
        for(j=0;j<i;j++)
            if(arr[j]>=arr[i])
                diff=min(diff,arr[j]-arr[i]);

                
        if(diff=INT_MAX)
            cout<<-1;
        else
            cout<<(arr[i]+diff );          
    }
}





EFFICIENT SOLUTION- O(nlogn)

void printCeiling(int arr[],int n)
{
    print(-1)
    1-create a self-balancing BST(set in C++). let it be s
    2-insert arr[0] into s;
    3-for(int i=1;i<n;i++)
       {
        if(s contains a ceiling of arr[i])
            print the ceiling
        else
            print -1

         Insert arr[i] into s       
       }
}











*/