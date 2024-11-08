#include <bits/stdc++.h>
using namespace std;
/*
void print (int mat[3][2])
{
 for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)
        cout<<mat[i][j]<<" ";
}

int main()
{
    int mat[3][2]={{10,20},{30,40},{50,60}};
    print(mat);
    return 0;
    
}


// for variable no. of rows
void print (int mat[][2],int m)
{
 for(int i=0;i<m;i++)
    for(int j=0;j<2;j++)
        cout<<mat[i][j]<<" ";
}

int main()
{
    int mat[3][2]={{10,20},{30,40},{50,60}};
    print(mat,3);
    return 0;
    
}

//C-style Solution to write general purpose matrix methods
// 1) using double pointer

void print(int **arr,int m, int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
}
int main()
{
    int **arr;
    int m=3,n=2;
    arr = new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}

// 1) using array of pointer

void print(int *arr,int m, int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
}
int main()
{
    int m=3,n=2;
    int *arr[m];  //ARRAY OF POINTERS
    
   
    for(int i=0;i<m;i++)
    {
        arr[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}


// USING ARRAY OF VECTORS
void print(vector<int> arr[],int m)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<arr[i].size();j++)
            cout<<arr[i][j]<<" ";
}
int main()
{
    int m=3,n=2;
    vector <int> arr[m];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            arr[i].push_back(i);
    print (arr,m);
    return 0;
}   
*/

// USING vectors OF VECTORS
void print(vector<vector<int>> &arr)
{
    for(int i=0;i<arr.size();i++)
        for(int j=0;j<arr[i].size();j++)
            cout<<arr[i][j]<<" ";
}
int main()
{
    int m=3,n=2;
    vector< vector<int>> arr;
    for(int i=0;i<m;i++)
    {
        vector <int> v;
        for(int j=0;j<n;j++)
            v.push_back(i);
        arr.push_back(v);    
    }
        
    print (arr);
    
}   

//JAGGED ARRAYS