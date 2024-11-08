#include <iostream>
using namespace std;
/*
int main()
{
    int arr[3][2]={{10,20},
                    {30,40},
                    {50,60}};
    for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
    cout<<arr[i][j]<<" "; // i= row and j=column
    return 0;               
}

IMPORTANT POINTS
1) elements are stored in Row-major order.
[10,20,30,40,50,60]'

2)Internal Curly Brackets are optional 
int arr[3][2]={10,20,30,40,50}

3)only the first dimension can be omitted when we intialize
int arr[][2]={{1,2},{3,4}}
int arr[][2][2]={{{1,2},{3,4}},
                {{5,6},{7,8}}}


//VARIABLE SIZED ARRAY

int main()
{
    int m=3,n=2;
    int arr[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            arr[i][j]=i+j;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
    return 0;                
}

/*
OTHER WAYS TO CREATE 

1)DOUBLE POINTER
its disadvantage is it is not cache friendly(not at continuous location)

int main()
{
    int m=3,n=2;
    int **arr;
    arr=new int *[m];
    for(int i=0;i<m;i++)
        arr[i]=new int [n]; // DYNAMIC ALLOCATE MEMORY
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
       {
        arr[i][j]=10;
        cout<<arr[i][j]<<" "; 
       }   
     
}



2)ARRAYS OF POINTER

int main()
{
    int m=3,n=2;
    int *arr[m];
   
    for(int i=0;i<m;i++)
        arr[i]=new int [n]; // create a 2D array of size m*n
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
       {
        arr[i][j]=10;
        cout<<arr[i][j]<<" "; 
       }   
     
}



3)Array of vectors
*/

#include <vector>
int main()
{
    int m=3,n=2;
    vector<int > arr[m];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        arr[i].push_back(10);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
}
/*
- not as cache friendly as simple 2-D arrays 
-Individual rows are of dynamic sizes,
-Easy to pass to a function
*/
/*
3)Array of vectors

- NUMBER OF ROWS CAN ALSO BE DYNAMIC
- not as cache friendly as simple 2-D arrays 
-Individual rows are of dynamic sizes,
-Easy to pass to a function

*/
int main()
{
    int m=3,n=2;
    vector<vector<int>> arr;
        for(int i=0;i<m;i++)
        {
        vector <int> v;
        for(int j=0;j<n;j++)
            v.push_back(10);
        arr.push_back(v);    
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cout<<arr[i][j]<<" ";


}